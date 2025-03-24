class Solution {
public:
	int countPrefixes(vector<string>& w, string s) {
		int ans = 0;
		for (auto& x : w) {
			ans += x.size() <= s.size() and s.substr(0, x.size()) == x;
		}
		return ans;
	}
};