class Solution {
  public:
	int maxSubArray(vector<int>& nums) {
		int n = nums.size();
		std::vector<int> dp(n, 0);
		dp[0] = nums[0];
		for (int i = 1; i < n; i++) {
			dp[i] = std::max(dp[i - 1] + nums[i], nums[i]);
		}
		return std::ranges::max(dp);
	}
};