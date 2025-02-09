class Solution {
  public:
	vector<vector<int>> sortMatrix(vector<vector<int>>& g) {
		int n = g.size();
		auto work = [&](int i, int j, bool t) {
			std::vector<int> p;
			for (int ni = i, nj = j; ni < n and nj < n; ni++, nj++) {
				p.push_back(g[ni][nj]);
			}
			if (t) {
				std::ranges::sort(p);
			} else {
				std::sort(p.rbegin(), p.rend());
			}
			int k = 0;
			for (int ni = i, nj = j; ni < n and nj < n; ni++, nj++, k++) {
				g[ni][nj] = p[k];
			}
		};
		for (int i = 0, j = 1, t = 1; j < n; j++) {
			work(i, j, t);
		}
		for (int i = 0, j = 0, t = 0; i < n; i++) {
			work(i, j, t);
		}
		return g;
	}
};