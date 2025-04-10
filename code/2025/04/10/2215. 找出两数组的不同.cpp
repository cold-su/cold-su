class Solution {
public:
	vector<vector<int>> findDifference(vector<int>& a, vector<int>& b) {
		std::map<int, int> s, t;
		for (int x : a) {
			s[x]++;
		}
		for (int x : b) {
			t[x]++;
		}
		std::vector ans(2, std::vector<int>(0));
		for (auto [k, v] : s) {
			if (not t.count(k)) {
				ans[0].push_back(k);
			}
		}
		for (auto [k, v] : t) {
			if (not s.count(k)) {
				ans[1].push_back(k);
			}
		}
		return ans;
	}
};