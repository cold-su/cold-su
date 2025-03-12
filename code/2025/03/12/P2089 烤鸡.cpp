#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		std::vector<int> p;
		std::vector<std::vector<int>> ans;
		auto dfs = [&](auto & self, int i, int k) {
			if (i == 10) {
				if (k == n) {
					ans.push_back(p);
				}
				return;
			}
			for (int j = 1; j <= 3; j++) {
				p.push_back(j);
				self(self, i + 1, k + j);
				p.pop_back();
			}
		};
		dfs(dfs, 0, 0);
		std::cout << ans.size() << "\n";
		for (auto& x : ans) {
			for (int i = 0; i < 10; i++) {
				std::cout << x[i] << " \n"[i == 9];
			}
		}
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
