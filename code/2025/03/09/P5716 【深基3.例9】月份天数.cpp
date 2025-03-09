#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int y, m;
		std::cin >> y >> m;
		if (m == 2) {
			std::cout << ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0 && y % 3200 != 0) || y % 172800 == 0 ? 29 : 28);
			return;
		}
		int ans[13] {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		std::cout << ans[m];
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
