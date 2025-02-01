class Solution {
  public:
	int findKthLargest(vector<int>& nums, int k) {
		int n = nums.size();
		std::ranges::nth_element(nums, nums.begin() + n - k);
		return nums[n - k];
	}
};