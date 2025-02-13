class Solution {
  public:
	vector<int> searchRange(vector<int>& nums, int target) {
		if (!std::ranges::binary_search(nums, target)) {
			return { -1, -1};
		}
		int l = std::ranges::lower_bound(nums, target) - nums.begin();
		int i = 0, j = nums.size();
		while (i + 1 < j) {
			int mid = i + (j - i) / 2;
			if (nums[mid] > target) {
				j = mid;
			} else {
				i = mid;
			}
		}
		return {l, i};
	}
};