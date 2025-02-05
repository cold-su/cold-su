class Solution {
  public:
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		std::vector<std::vector<int>> ans;
		std::ranges::sort(nums);
		do {
			ans.push_back(nums);
		} while (std::next_permutation(nums.begin(), nums.end()));
		return ans;
	}
};