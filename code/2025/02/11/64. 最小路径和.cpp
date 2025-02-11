class Solution {
  public:
	int minPathSum(vector<vector<int>>& g) {
		int m = g.size(), n = g[0].size();
		std::vector dp(m, std::vector<unsigned> (n));
		dp[0][0] = g[0][0];
		for (int i = 1; i < m; i++) {
			dp[i][0] = dp[i - 1][0] + g[i][0];
		}
		for (int j = 1; j < n; j++) {
			dp[0][j] = dp[0][j - 1] + g[0][j];
		}
		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				dp[i][j] = std::min(dp[i - 1][j], dp[i][j - 1]) + g[i][j];
			}
		}
		return dp[m - 1][n - 1];
	}
};