#include <bits/stdc++.h>

const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << std::fixed << std::setprecision(3);
	std::cout << (a * c + b * (a + c) + (3.1415926535 * c * c / (double) 4)) * 1e-4;
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
