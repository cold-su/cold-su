#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		int ans = 0;
		std::set<int> x, d1, d2;
		auto dfs = [&](auto & self, int r) -> void {
			if (r == n) {
				ans++;
				return;
			}
			for (int c = 0; c < n; c++) {
				auto vis = [&]() {
					return x.count(c) or d1.count(c + r) or d2.count(c - r);
				};
				if (not vis()) {
					x.insert(c);
					d1.insert(c + r);
					d2.insert(c - r);
					self(self, r + 1);
					x.erase(c);
					d1.erase(c + r);
					d2.erase(c - r);
				}
			}
		};
		dfs(dfs, 0);
		std::cout << ans;
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
