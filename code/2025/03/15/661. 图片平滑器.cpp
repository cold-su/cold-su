class Solution {
public:
	vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
		int n = img.size(), m = img[0].size();
		auto work = [&](int i, int j) {
			int p = 0, t = 0;
			for (int r = std::max(i - 1, 0); r <= std::min(n - 1, i + 1); r++) {
				for (int c = std::max(j - 1, 0); c <= std::min(m - 1, j + 1); c++) {
					p += img[r][c];
					t++;
				}
			}
			return p / t;
		};
		auto ans = img;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				ans[i][j] = work(i, j);
			}
		}
		return ans;
	}
};