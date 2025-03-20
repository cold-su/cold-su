#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n, m;
		std::cin >> n >> m;
		int x, y;
		std::cin >> x >> y;
		x--, y--;
		std::vector<std::array<int, 2>> dirs = {
			{1, 2},
			{ -1, 2},
			{1, -2},
			{ -1, -2},
			{2, 1},
			{ -2, 1},
			{2, -1},
			{ -2, -1}
		};
		std::deque<std::pair<int, int>> q {{x, y}};
		std::vector ans(n, std::vector<int> (m, -1));
		ans[x][y] = 0;
		while (not q.empty()) {
			auto [u, k] = q.front();
			q.pop_front();
			for (int i = 0; i < dirs.size(); i++) {
				auto range = [&](int x, int k) {
					return 0 <= x and x < k;
				};
				int nu = u + dirs[i][0];
				int nk = k + dirs[i][1];
				if (not range(nu, n) or not range(nk, m) or ans[nu][nk] != -1) {
					continue;
				}
				ans[nu][nk] = ans[u][k] + 1;
				q.push_back(std::make_pair(nu, nk));
			}
		}
		for (int i = 0; i < n; i++, puts("")) {
			for (int j = 0; j < m; j++) {
				printf("%-5d", ans[i][j]);
			}
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
