class Solution {
  public:
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		int n = nums.size();
		vector<int> p, vis(n);
		vector<vector<int>> ans;
		ranges::sort(nums);
		auto dfs = [&](this auto && dfs, int i) {
			if (i == n) {
				ans.push_back(p);
				return;
			}
			for (int j = 0; j < n; j++) {
				if (!vis[j]) {
					if (j - 1 >= 0 and nums[j] == nums[j - 1] and vis[j - 1]) {
						continue;
					}
					p.push_back(nums[j]);
					vis[j] = true;
					dfs(i + 1);
					vis[j] = false;
					p.pop_back();
				}
			}
		};
		dfs(0);
		return ans;
	}
};

/*
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
*/