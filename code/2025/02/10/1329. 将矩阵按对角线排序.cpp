class Solution {
  public:
	vector<vector<int>> diagonalSort(vector<vector<int>>& g) {
		int m = g.size(), n = g[0].size();
		auto work = [&](int i, int j) {
			std::vector<int> p;
			for (int ni = i, nj = j; ni < m and nj < n; ni++, nj++) {
				p.push_back(g[ni][nj]);
			}
			std::ranges::sort(p);
			for (int ni = i, nj = j, k = 0; ni < m and nj < n; ni++, nj++, k++) {
				g[ni][nj] = p[k];
			}
		};
		for (int i = 0; i < m; i++) {
			work(i, 0);
		}
		for (int j = 1; j < n; j++) {
			work(0, j);
		}
		return g;
	}
};