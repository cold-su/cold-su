class Solution {
  public:
	int minimumTotal(vector<vector<int>>& a) {
		int n = a.size();
		for (int i = 0; i < n; i++) {
			for (int j = 0, m = a[i].size(); j < m; j++) {
				if (i == 0) {
					break;
				}
				int l, r;
				if (j == 0 || j == m - 1) {
					if (j == 0) {
						l = INT_MAX;
						r = a[i - 1][j];
					} else {
						l = a[i - 1][j - 1];
						r = INT_MAX;
					}
				} else {
					l = a[i - 1][j - 1];
					r = a[i - 1][j];
				}
				a[i][j] += std::min(l, r);
			}
		}
		return std::ranges::min(a[n - 1]);
	}
};