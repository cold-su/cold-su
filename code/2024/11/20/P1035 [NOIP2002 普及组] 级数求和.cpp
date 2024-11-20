#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int k;
	std::cin >> k;

	if (k == 0) {
		std::cout << 0;
		return;
	}

	double m = 0;
	int n = 1;
	while (m <= k) {
		m += (double) 1 / n;
		n++;
	}

	std::cout << n - 1;
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
