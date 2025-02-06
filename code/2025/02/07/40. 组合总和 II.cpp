class Solution {
  public:
	vector<vector<int>> combinationSum2(vector<int>& a, int t) {
		std::vector<std::vector<int>> ans;
		std::vector<int> p;
		int n = a.size(), sum = 0;
		std::vector<bool> vis(n);
		std::ranges::sort(a);
		auto dfs = [&](this auto && dfs, int i) {
			if (sum > t || i >= n || sum == t) {
				if (sum == t) {
					ans.push_back(p);
				}
				return;
			}
			p.push_back(a[i]);
			sum += a[i];
			dfs(i + 1);
			sum -= a[i];
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