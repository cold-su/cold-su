class Solution {
public:
	int scoreOfString(string s) {
		int ans = 0;
		for (int i = 0, n = s.size(); i + 1 < n; i++) {
			ans += abs(s[i] - s[i + 1]);
		}
		return ans;
	}
};