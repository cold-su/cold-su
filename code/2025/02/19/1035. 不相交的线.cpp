class Solution {
public:
	int maxUncrossedLines(vector<int>& a, vector<int>& b) {
		int n = a.size(), m = b.size();
		std::vector dp(n + 1, std::vector<int> (m + 1));
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (a[i - 1] == b[j - 1]) {
					dp[i][j] = dp[i - 1][j - 1] + 1;
				} else {
					dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		return dp[n][m];
	}
};