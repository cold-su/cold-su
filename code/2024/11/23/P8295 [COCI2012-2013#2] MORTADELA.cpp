#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int a, b;
	std::cin >> a >> b;

	double ans = a / (double) b;

	int q;
	std::cin >> q;
	while (q--) {
		int a, b;
		std::cin >> a >> b;

		ans = std::min(a / (double) b, ans);
	}

	std::cout << std::fixed << std::setprecision(2) << 1000 * ans;
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
