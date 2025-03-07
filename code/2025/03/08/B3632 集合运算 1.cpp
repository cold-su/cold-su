#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int x;
		std::cin >> x;
		std::map<int, bool> a;
		std::set<int> set;
		for (int i = 0; i < x; i++) {
			int p;
			std::cin >> p;
			a[p] = true;
			set.insert(p);
		}
		std::cout << a.size();
		int y;
		std::cin >> y;
		std::vector<int> ans;
		for (int i = 0; i < y; i++) {
			int p;
			std::cin >> p;
			if (a[p]) {
				ans.push_back(p);
			}
			set.insert(p);
		}
		std::cout << "\n";
		for (int i = 0, n = ans.size(); i < n; i++) {
			std::cout << ans[i] << " \n"[i == n - 1];
		}
		if (ans.size() == 0) {
			std::cout << "\n";
		}
		for (auto i = set.begin(); i != set.end(); i++) {
			std::cout << *i << " ";
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
