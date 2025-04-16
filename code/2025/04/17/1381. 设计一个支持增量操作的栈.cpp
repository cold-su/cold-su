class CustomStack {
public:
	int max_size;
	std::vector<std::pair<int, int>> s;
	CustomStack(int maxSize) : max_size(maxSize) {}

	void push(int x) {
		if (s.size() < max_size) {
			s.push_back({x, 0});
		}
	}

	int pop() {
		int x = s.size() ? s.back().first + s.back().second : -1;
		if (s.size()) {
			int p = s.back().second;
			s.pop_back();
			if (s.size()) {
				s.back().second += p;
			}
		}
		return x;
	}

	void increment(int k, int val) {
		int n = s.size();
		if (n) {
			s[std::max(std::min(k - 1, n - 1), 0)].second += val;
		}
	}
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */