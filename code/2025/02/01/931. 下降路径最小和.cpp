class Solution {
  public:
	int minFallingPathSum(vector<vector<int>>& a) {
		int n = a.size();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0) {
					break;
				}
				int l, m, r;
				m = a[i - 1][j];
				if (j == 0 || j == n - 1) {
					if (j == 0) {
						l = INT_MAX;
						r = a[i - 1][j + 1];
					} else {
						l = a[i - 1][j - 1];
						r = INT_MAX;
					}
				} else {
					l = a[i - 1][j - 1];
					r = a[i - 1][j + 1];
				}
				a[i][j] += std::min({l, m, r});
			}
		}
		return std::ranges::min(a[n - 1]);
	}
};