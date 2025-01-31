class Solution {
  public:
	vector<int> findMissingAndRepeatedValues(vector<vector<int>>& a) {
		int n = a.size();
		std::vector<int> p(n * n, -1);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				p[a[i][j] - 1]++;
			}
		}
		int l, r;
		for (int i = 0; i < p.size(); i++) {
			if (p[i] == -1) {
				r = i + 1;
			}
			if (p[i] == 1) {
				l = i + 1;
			}
		}
		return {l, r};
	}
};