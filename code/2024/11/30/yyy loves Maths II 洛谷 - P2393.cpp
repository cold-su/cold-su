#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
#define F long double

	F ans = 0, a = 0;
	while (scanf("%LF", &a) != -1) {
		ans += a * 1000000;
	}

	std::cout << std::fixed << std::setprecision(5);
	std::cout << ans / (double) 1000000;
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
