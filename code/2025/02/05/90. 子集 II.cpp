class Solution {
  public:
	vector<vector<int>> subsetsWithDup(vector<int>& a) {
		std::vector<int> p;
		std::vector<std::vector<int>> ans;
		int n = a.size();
		std::ranges::sort(a);
		auto dfs = [&](this auto && dfs, int i) {
			if (i == n) {
				ans.push_back(p);
				return;
			}
			p.push_back(a[i]);
			dfs(i + 1);
			p.pop_back();
			int x = a[i];
			while (i < n and x == a[i]) {
				i++;
			}
			dfs(i);
		};
		dfs(0);
		return ans;
	}
};

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