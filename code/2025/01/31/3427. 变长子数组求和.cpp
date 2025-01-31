class Solution {
  public:
	int subarraySum(vector<int>& nums) {
		int n = nums.size();
		std::vector<int> p(n + 1);
		std::partial_sum(nums.begin(), nums.end(), p.begin() + 1);
		int ans = 0;
		for (int i = 0; i < n; i++) {
			int j = i + 1, s = std::max(0, i - nums[i]);
			ans += p[j] - p[s];
		}
		return ans;
	}
};