class Solution {
public:
	vector<int> rowAndMaximumOnes(vector<vector<int>>& a) {
		std::vector<std::vector<int>> b;
		int n = a.size();
		for (int i = 0; i < n; i++) {
			b.push_back({i, (int) std::count(a[i].begin(), a[i].end(), 1)});
		}
		std::sort(b.begin(), b.end(), [](auto & l, auto & r) {
			if (l[1] == r[1]) {
				return l[0] < r[0];
			}
			return l[1] > r[1];
		});
		return b.front();
	}
};