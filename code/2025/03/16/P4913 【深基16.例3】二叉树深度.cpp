#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		n++;
		std::vector<std::pair<int, int>> a(n);
		for (int i = 1; i < n; i++) {
			std::cin >> a[i].first >> a[i].second;
		}
		int ans = 0;
		auto dfs = [&](auto & self, int root, int cnt) {
			if (root == 0) {
				return;
			}
			ans = std::max(ans, cnt);
			self(self, a[root].first, cnt + 1);
			self(self, a[root].second, cnt + 1);
		};
		dfs(dfs, 1, 1);
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
