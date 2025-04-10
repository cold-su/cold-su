class Solution {
public:
	vector<int> intersection(vector<int>& a, vector<int>& b) {
		std::map<int, int> s, t;
		std::vector<int> ans;
		for (int x : a) {
			s[x]++;
		}
		for (int x : b) {
			t[x]++;
		}
		for (auto [k, v] : s) {
			if (t.count(k)) {
				ans.push_back(k);
			}
		}
		return ans;
	}
};