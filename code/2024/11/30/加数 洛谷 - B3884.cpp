#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;

	int ans = 0;

	while (n != 0) {
		if (n >= 1e5) {
			ans += 6;
		} else if (n >= 1e4) {
			ans += 5;
		} else if (n >= 1e3) {
			ans += 4;
		} else if (n >= 1e2) {
			ans += 3;
		} else if (n >= 1e1) {
			ans += 2;
		} else if (n >= 1e0) {
			ans += 1;
		}

		n /= 2;
	}

	std::cout << ans;
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
