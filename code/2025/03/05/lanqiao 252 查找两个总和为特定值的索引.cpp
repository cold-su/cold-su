#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		std::vector<int> a(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		int t;
		std::cin >> t;
		std::map<int, int> map;
		std::vector<std::pair<int, int>> ans;
		for (int i = 0; i < n; i++) {
			int x = a[i];
			if (map.count(t - x)) {
				ans.emplace_back(map[t - x], i);
			}
			map[x] = i;
		}
		std::sort(ans.begin(), ans.end());
		std::cout << ans[0].first << " " << ans[0].second << '\n';
	}

};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
