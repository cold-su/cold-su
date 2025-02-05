class Solution {
  public:
	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		std::ranges::sort(nums);
		int n = nums.size();
		std::vector<std::vector<int>> ans;
		std::vector<int> p;
		auto dfs = [&](this auto & dfs, int i) -> void {
			if (i == n) {
				ans.push_back(p);
				return;
			}
			dfs(i + 1);
			p.push_back(nums[i]);
			dfs(i + 1);
			p.pop_back();
		};
		dfs(0);
		std::ranges::sort(ans);
		auto it = std::unique(ans.begin(), ans.end());
		ans.resize(std::distance(ans.begin(), it));
		return ans;
	}
};