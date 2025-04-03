#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		std::vector<int> a(n), b(n), g(n), k(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i] >> b[i] >> g[i] >> k[i];
		}
		int x, y;
		std::cin >> x >> y;
		int ans = -1;
		for (int i = 0; i < n; i++) {
			if ((a[i] <= x and x <= a[i] + g[i]) and (b[i] <= y and y <= b[i] + k[i])) {
				ans = i + 1;
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
