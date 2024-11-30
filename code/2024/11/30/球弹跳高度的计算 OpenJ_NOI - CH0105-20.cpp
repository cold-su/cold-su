#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	double n;
	std::cin >> n;

	double ans = n;

	for (int i = 0; i < 10; i++) {
		n /= 2;
		ans += std::vector<double> {n * 2, 0} [i == 9];
	}

	std::cout << ans << "\n" << n;
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
