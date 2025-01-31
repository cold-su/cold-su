class Solution {
  public:
	vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
		int n = nums.size();
		std::ranges::sort(nums);
		std::vector<int> ans;
		std::partial_sum(nums.begin(), nums.end(), nums.begin());
		// for (int i = 0; i < n; i++) {
		// 	std::cout << nums[i] << " \n"[i == n - 1];
		// }
		for (int x : q) {
			auto i = std::upper_bound(nums.begin(), nums.end(), x);
			ans.push_back(std::distance(nums.begin(), i));
		}
		return ans;
	}
};