class Solution {
  public:
	int uniquePathsWithObstacles(vector<vector<int>>& a) {
		int m = a.size(), n = a[0].size();
		std::vector f(m + 1, std::vector<int> (n + 1));
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == 1 and j == 1 and a[i - 1][j - 1] == 0) {
					f[i][j] = 1;
				} else {
					if (a[i - 1][j - 1] == 1) {
						f[i][j] = 0;
					} else {
						f[i][j] = f[i - 1][j] + f[i][j - 1];
					}
				}
			}
		}
		return f[m][n];
	}
};