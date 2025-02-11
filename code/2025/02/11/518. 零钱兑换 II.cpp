class Solution {
  public:
	int change(int amt, vector<int>& c) {
		std::vector<unsigned> dp(amt + 1);
		dp[0] = 1;
		for (int x : c) {
			for (int a = x; a <= amt; a++) {
				dp[a] += dp[a - x];
			}
		}
		return dp[amt];
	}
};

class Solution {
  public:
	int change(int amt, vector<int>& c) {
		int n = c.size();
		std::vector dp(n + 1, std::vector<unsigned> (amt + 1));
		for (int i = 0; i <= n; i++) {
			dp[i][0] = 1;
		}
		for (int i = 1; i <= n; i++) {
			for (int a = 1; a <= amt; a++) {
				if (c[i - 1] > a) {
					dp[i][a] = dp[i - 1][a];
				} else {
					dp[i][a] = dp[i - 1][a] + dp[i][a - c[i - 1]];
				}
			}
		}
		return dp[n][amt];
	}
};