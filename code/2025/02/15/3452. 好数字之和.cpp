class Solution {
  public:
	int sumOfGoodNumbers(vector<int>& nums, int k) {
		int n = nums.size();
		int ans = 0;
		for (int i = 0; i < n; i++) {
			int l = 0, r = 0;
			if (i - k < 0) {
				l = 0;
			} else {
				l = nums[i - k];
			}
			if (i + k >= n) {
				r = 0;
			} else {
				r = nums[i + k];
			}
			if (l < nums[i] and nums[i] > r) {
				ans += nums[i];
			}
		}
		return ans;
	}
};