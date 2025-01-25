#include <bits/stdc++.h>
const bool MULTI = false;

void solve() {
	double a, b, c, d;
	std::cin >> a >> b >> c >> d;
	std::cout << std::fixed << std::setprecision(2);
	for (double i = -100.00; i <= 100.00; i += 0.01) {
		if (abs(a * i * i * i + b * i * i + c * i + d - 0) < 1e-4) {
			std::cout << i << " ";
		}
	}
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (MULTI) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
