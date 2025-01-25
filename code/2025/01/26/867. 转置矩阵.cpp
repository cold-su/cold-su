class Solution {
  public:
	vector<vector<int>> transpose(vector<vector<int>>& a) {
		int n = a.size(), m = a[0].size();
		std::vector ans(m, std::vector<int> (n));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				ans[j][i] = a[i][j];
			}
		}
		return ans;
	}
};