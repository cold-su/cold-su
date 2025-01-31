class Solution {
  public:
	int removeDuplicates(vector<int>& nums) {
		int n = nums.size();
		for (int i = 0; i < n; i++, n = nums.size()) {
			if (i >= 1) {
				for (; nums[i] == nums[i - 1] and i < n; n = nums.size()) {
					nums.erase(nums.begin() + i);
				}
			}
		}
		return n;
	}
};