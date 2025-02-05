class Solution {
  public:
	vector<vector<int>> combine(int n, int k) {
		std::vector<int> p;
		std::vector<std::vector<int>> ans;
		auto dfs = [&](this auto && dfs, int i) {
			int m = p.size();
			int d = k - m;
			if (n - i < d) {
				return;
			}
			if (d == 0) {
				ans.push_back(p);
				return;
			}
			if (n - i >= d) {
				dfs(i + 1);
			}
			p.push_back(i + 1);
			dfs(i + 1);
			p.pop_back();
		};
		dfs(0);
		return ans;
	}
};