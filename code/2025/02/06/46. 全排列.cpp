class Solution {
  public:
	vector<vector<int>> permute(vector<int>& nums) {
		int n = nums.size();
		std::vector<int> p, vis(n);
		std::vector<std::vector<int>> ans;
		auto dfs = [&](this auto && self, int i) {
			if (i == n) {
				ans.push_back(p);
				return;
			}
			for (int j = 0; j < n; j++) {
				if (!vis[j]) {
					p.push_back(nums[j]);
					vis[j] = true;
					self(i + 1);
					vis[j] = false;
					p.pop_back();
				}
			}
		};
		dfs(0);
		return ans;
	}
};

class Solution {
  public:
	vector<vector<int>> permute(vector<int>& nums) {
		int n = nums.size();
		std::vector<int> p(n);
		std::vector<bool> vis(n);
		std::vector<std::vector<int>> ans;
		auto dfs = [&](this auto && dfs, int i) {
			if (i == n) {
				ans.push_back(p);
				return;
			}
			for (int j = 0; j < n; j++) {
				if (vis[j] == false) {
					vis[j] = true;
					p[i] = nums[j];
					dfs(i + 1);
					vis[j] = false;
				}
			}
		};
		dfs(0);
		return ans;
	}
};