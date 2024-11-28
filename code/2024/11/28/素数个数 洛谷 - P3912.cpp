#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;

	bool is[n + 1];
	int ans = 0;

	memset(is, true, sizeof is);
	is[0] = false;
	is[1] = false;

	for (int i = 2; i < sqrt(n); i++) {
		if (is[i]) {
			for (int j = i * i; j <= n; j += i) {
				is[j] = false;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		ans += is[i];
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
