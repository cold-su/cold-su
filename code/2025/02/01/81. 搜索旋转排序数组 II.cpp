class Solution {
  public:
	bool search(vector<int>& nums, int t) {
		std::ranges::sort(nums);
		return std::binary_search(nums.begin(), nums.end(), t);
	}
};