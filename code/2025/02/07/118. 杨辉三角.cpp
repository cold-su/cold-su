class Solution {
  public:
	vector<vector<int>> generate(int n) {
		std::vector<std::vector<int>> ans(n);
		for (int i = 0; i < n; i++) {
			ans[i].resize(i + 1, 1);
			for (int j = 1; j < i; j++) {
				ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
			}
		}
		return ans;
	}
};

class Solution {
  public:
	vector<vector<int>> generate(int n) {
		std::vector<std::vector<int> > ans {{1}};
		for (int i = 1; i < n; i++) {
			ans.push_back({});
			for (int j = 0; j <= i; j++) {
				if (j == i or j == 0) {
					ans[i].push_back(1);
				} else {
					ans[i].push_back(ans[i - 1][j] + ans[i - 1][j - 1]);
				}
			}
		}
		return ans;
	}
};