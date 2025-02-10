class Solution {
  public:
	int numIslands(vector<vector<char>>& g) {
		int n = g.size(), m = g[0].size();
		std::vector vis(n, std::vector<bool> (m));
		auto dfs = [&](this auto && dfs, int i, int j) {
			if (i >= n || j >= m || i < 0 || j < 0) {
				return;
			}
			if (vis[i][j] || g[i][j] == '0') {
				return;
			}
			vis[i][j] = true;
			dfs(i + 1, j);
			dfs(i, j + 1);
			dfs(i - 1, j);
			dfs(i, j - 1);
		};
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (g[i][j] == '1' and !vis[i][j]) {
					dfs(i, j);
					ans++;
				}
			}
		}
		return ans;
	}
};