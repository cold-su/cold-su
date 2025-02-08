class Solution {
  public:
	vector<vector<int>> combinationSum3(int k, int n) {
		std::vector<std::vector<int>> ans;
		std::vector<int> p;
		auto dfs = [&](this auto && dfs, int idx, int k, int n) {
			if (k > 9) {
				return;
			}
			if (n == 0 and k == 0) {
				ans.push_back(p);
				return;
			}
			for (int i = idx; i < 10; i++) {
				p.push_back(i);
				dfs(i + 1, k - 1, n - i);
				p.pop_back();
			}
		};
		dfs(1, k, n);
		return ans;
	}
};