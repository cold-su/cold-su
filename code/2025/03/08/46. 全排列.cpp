class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
		int n = nums.size();
		std::set<int> vis;
		std::vector<std::vector<int>> ans;
		std::vector<int> p;
		auto dfs = [&](auto & self, int i) {
			if (i == n) {
				ans.push_back(p);
				return;
			}
			for (int x : nums) {
				if (!vis.count(x)) {
					p.push_back(x);
					vis.insert(x);
					self(self, i + 1);
					vis.erase(x);
					p.pop_back();
				}
			}
		};
		dfs(dfs, 0);
		return ans;
	}
};