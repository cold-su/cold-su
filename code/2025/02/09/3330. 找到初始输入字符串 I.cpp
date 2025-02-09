class Solution {
  public:
	int possibleStringCount(string s) {
		int n = s.size();
		std::vector<int> dp(n, 1);
		for (int i = 1; i < n; i++) {
			if (s[i] == s[i - 1]) {
				dp[i] = dp[i - 1] + 1;
			} else {
				dp[i] = dp[i - 1];
			}
		}
		return dp[n - 1];
	}
};