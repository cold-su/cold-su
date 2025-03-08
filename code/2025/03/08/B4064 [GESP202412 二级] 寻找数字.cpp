#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		double ans = pow(n, 1 / (double) 4);
		if ((int) ans == ans) {
			std::cout << ans << '\n';
		} else {
			std::cout << -1 << '\n';
		}
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	int n;
	std::cin >> n;
	while (n--) {
		p.solve();
	}
	return 0;
}
