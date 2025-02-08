class Solution {
  public:
	vector<vector<int>> combinationSum(vector<int>& a, int t) {
		std::vector<std::vector<int>> ans;
		std::vector<int> p;
		int n = a.size();
		std::ranges::sort(a);
		auto dfs = [&](this auto && dfs, int t, int idx) {
			if (t < 0) {
				return;
			}
			if (t == 0) {
				ans.push_back(p);
				return;
			}
			for (int i = idx; i < n; i++) {
				if (t - a[i] < 0) {
					return;
				}
				p.push_back(a[i]);
				dfs(t - a[i], i);
				p.pop_back();
			}
		};
		dfs(t, 0);
		return ans;
	}
};