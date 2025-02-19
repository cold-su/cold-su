class Solution {
public:
	int minInsertions(string s) {
		int n = s.size();
		auto t = s;
		std::reverse(t.begin(), t.end());
		return n - longestCommonSubsequence(s, t);
	}

	int longestCommonSubsequence(string s, string t) {
		int n = s.size(), m = t.size();
		std::vector dp(n + 1, std::vector<int> (m + 1));
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (s[i - 1] == t[j - 1]) {
					dp[i][j] = dp[i - 1][j - 1] + 1;
				} else {
					dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		return dp[n][m];
	}
};