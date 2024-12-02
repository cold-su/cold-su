#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int m, s, t;
	std::cin >> m >> s >> t;

	t++;
	std::vector<int> dp(t);

	for (int i = 1; i < t; i++) {
		if (m >= 10) {
			dp[i] = dp[i - 1] + 60;
			m -= 10;
		} else {
			dp[i] = dp[i - 1];
			m += 4;
		}
	}

	for (int i = 1; i < t; i++) {
		dp[i] = std::max(dp[i], dp[i - 1] + 17);
		if (dp[i] >= s) {
			std::cout << "Yes\n" << i;
			return;
		}
	}

	std::cout << "No\n" << dp[t - 1];
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
