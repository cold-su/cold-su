class Solution {
  public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		int n = matrix.size(), m = matrix[0].size();
		std::vector<int> ans {matrix[0][0]};
		std::vector vis(n, std::vector<bool> (m));
		int p = 1;
		int i = 0, j = 0;
		vis[0][0] = true;
		while (true) {
			for (auto [a, b] : (std::pair<int, int>[]) { {0, 1}, {1, 0}, {0, -1}, { -1, 0}}) {
				while (true) {
					if (p == n * m) {
						return ans;
					}
					if (i + a < 0 || i + a >= n || j + b >= m || j + b < 0 || vis[i + a][j + b]) {
						break;
					}
					i += a, j += b;
					ans.push_back(matrix[i][j]);
					p++;
					vis[i][j] = true;
				}
			}
		}
	}
};