#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n, m;
	std::cin >> n >> m;

	std::string s, t;
	std::cin >> s >> t;

	n++;
	m++;

	std::vector dp(n, std::vector<int>(m, 0));

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);

			if (s[i - 1] == t[j - 1]) {
				dp[i][j] = dp[i - 1][j] + 1;
			}
		}
	}

	std::cout << dp[n - 1][m - 1];
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
