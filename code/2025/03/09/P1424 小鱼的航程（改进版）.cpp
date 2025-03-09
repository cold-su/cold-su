#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int x, n;
		std::cin >> x >> n;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (x != 6 and x != 7) {
				ans += 250;
			}
			x++;
			if (x > 7) {
				x = 1;
			}
		}
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
