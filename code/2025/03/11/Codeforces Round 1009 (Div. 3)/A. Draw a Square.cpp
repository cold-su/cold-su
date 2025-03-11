#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int l, r, d, u;
		std::cin >> l >> r >> d >> u;
		if (l != 0 and l == r and r == d and d == u) {
			std::cout << "Yes\n";
		} else {
			std::cout << "No\n";
		}
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	int t;
	std::cin >> t;
	while (t--) {
		p.solve();
	}
	return 0;
}
