class Solution {
  public:
	vector<int> getRow(int n) {
		std::vector<std::vector<int> > ans {{1}};
		for (int i = 1; i <= n; i++) {
			ans.push_back({});
			for (int j = 0; j <= i; j++) {
				if (j == i or j == 0) {
					ans[i].push_back(1);
				} else {
					ans[i].push_back(ans[i - 1][j] + ans[i - 1][j - 1]);
				}
			}
		}
		return ans[n];
	}
};