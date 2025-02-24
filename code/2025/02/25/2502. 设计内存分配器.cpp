class Allocator {
public:
	std::vector<int> p;
	Allocator(int n) {
		p.resize(n, -1);
	}

	int allocate(int size, int m) {
		int n = p.size();
		for (int i = 0; i < n; i++) {
			int j = i + 1;
			if (p[i] == -1) {
				while (j < n and p[j] == -1) {
					j++;
				}
				if (j - i >= size) {
					std::fill(p.begin() + i, p.begin() + std::min(i + size, n), m);
					// for (int l = 0; l < n; l++) {
					// 	std::cout << p[l] << " \n"[l == n - 1];
					// }
					return i;
				}
			}
		}
		return -1;
	}

	int freeMemory(int m) {
		int cnt = 0;
		for (int& x : p) {
			if (x == m) {
				x = -1;
				cnt++;
			}
		}
		return cnt;
	}
};

/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->freeMemory(mID);
 */