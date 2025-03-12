#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int r, c, k;
		std::cin >> r >> c >> k;
		std::vector<std::string> a(r);
		for (int i = 0; i < r; i++) {
			std::cin >> a[i];
		}
		int ans = 0;
		std::set<std::pair<int, int>> vis;
		auto dfs = [&](auto & self, int i, int j, int p, bool left = true) {
			if (not (0 <= i and i < r) or not (0 <= j and j < c)) {
				return;
			}
			if (a[i][j] == '#') {
				return;
			}
			if (p == k) {
				ans++;
				return;
			}
			if (left) {
				self(self, i + 1, j, p + 1, left);
			} else {
				self(self, i, j - 1, p + 1, left);
			}
		};
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (a[i][j] == '.') {
					dfs(dfs, i, j, 1);
					dfs(dfs, i, j, 1, false);
				}
			}
		}
		std::cout << (k == 1 ? ans / 2 : ans);
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
