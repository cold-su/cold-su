class Solution {
  public:
	bool searchMatrix(vector<vector<int>>& g, int t) {
		int m = g.size(), n = g[0].size();
		for (int i = 0, j = n - 1; i < m and j >= 0;) {
			if (t < g[i][j]) {
				j--;
			} else if (t > g[i][j]) {
				i++;
			} else {
				return true;
			}
		}
		return false;
	}
};