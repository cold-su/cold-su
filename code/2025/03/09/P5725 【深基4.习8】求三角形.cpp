#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		work1(n);
		std::cout << '\n';
		work2(n);
	}

	void work1(int n) {
		for (int i = 1; i <= n * n; i++) {
			printf("%02d", i);
			if (i % n == 0) {
				std::cout << '\n';
			}
		}
	}

	void work2(int n) {
		int p = 1;
		for (int i = 1; i <= n; i++) {
			int t = std::max(n - i, 0);
			while (t--) {
				std::cout << "  ";
			}
			for (int j = 0; j < i; j++, p++) {
				printf("%02d", p);
			}
			std::cout << '\n';
		}
	}
};

int main() {
	// std::ios::sync_with_stdio(0);
	// std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
