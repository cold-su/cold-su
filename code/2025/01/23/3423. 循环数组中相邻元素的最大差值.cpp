class Solution {
  public:
	int maxAdjacentDistance(vector<int>& nums) {
		int ans = abs(nums.back() - nums.front());
		for (int i = 0; i + 1 < nums.size(); i++) {
			ans = max(ans, abs(nums[i] - nums[i + 1]));
		}
		return ans;
	}
};