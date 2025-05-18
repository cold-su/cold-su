class Solution {
public:
	int minPathSum(std::vector<std::vector<int>>& g) {
		int n = g.size();
		int m = g[0].size();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				// int& val = g[i][j];
				// val += min(g[i - 1][j], g[i][j - 1]) 
				if (i || j) {
					int a = INT_MAX, b = INT_MAX;
					if (i) {
						a = g[i - 1][j];
					}
					if (j) {
						b = g[i][j - 1];
					}
					g[i][j] += std::min(a, b);
				}
			}
		}
		return g[n - 1][m - 1];
	}
};