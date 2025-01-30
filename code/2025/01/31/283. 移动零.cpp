class Solution {
  public:
	void moveZeroes(vector<int>& nums) {
		for (size_t i = nums.size(); i--;) {
			if (nums[i] == 0) {
				nums.push_back(0);
				nums.erase(nums.begin() + i);
			}
		}
	}
};