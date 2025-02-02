class Solution {
  public:
	int maxCount(int m, int n, vector<vector<int>>& ops) {
		for (auto p : ops) {
			m = std::min(m, p[0]);
			n = std::min(n, p[1]);
		}
		return m * n;
	}
};