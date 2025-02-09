class Solution {
  public:
	int maxAbsoluteSum(vector<int>& nums) {
		int n = nums.size();
		int ans {};
		for (int i {}, a {}, b {}; i < n; i++) {
			a = fmax(a, 0) + nums[i];
			b = fmin(b, 0) + nums[i];
			ans = fmax(ans, fmax(a, abs(b)));
		}
		return ans;
	}
};