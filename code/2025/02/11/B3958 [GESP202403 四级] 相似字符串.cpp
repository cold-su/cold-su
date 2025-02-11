#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s, t;
		std::cin >> s >> t;
		int n = s.size(), m = t.size();
		std::vector dp(n + 1, std::vector<int> (m + 1));
		for (int i = 1; i <= n; i++) {
			dp[i][0] = i;
		}
		for (int j = 1; j <= m; j++) {
			dp[0][j] = j;
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (s[i - 1] == t[j - 1]) {
					dp[i][j] = dp[i - 1][j - 1];
				} else {
					dp[i][j] = std::min({dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]}) + 1;
				}
			}
		}
		std::string ans;
		if (dp[n][m] <= 1) {
			ans = "similar";
		} else {
			ans = "not similar";
		}
		std::cout << ans << "\n";
	}
	return 0;
}
