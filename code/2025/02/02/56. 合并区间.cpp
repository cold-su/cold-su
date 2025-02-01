class Solution {
  public:
	vector<vector<int>> merge(vector<vector<int>>& v) {
		std::sort(v.begin(), v.end());
		std::vector ans(0, std::vector<int> (0));
		int i = 0, j = 1;
		while (j < v.size()) {
			if (v[i][1] > v[j][1]) {
				std::swap(v[i][1], v[j][1]);
			}
			int &l = v[i][1], &r = v[j][0];
			if (l >= r) {
				l = r = -1;
			}
			i++, j++;
		}
		i = 0;
		while (i < v.size()) {
			int l = v[i][0], r = v[i][1];
			while (r == -1) {
				i++;
				r = v[i][1];
			}
			ans.push_back({l, r});
			i++;
		}
		return ans;
	}
};