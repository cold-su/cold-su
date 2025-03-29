class Solution {
public:
	string addSpaces(string s, vector<int>& spaces) {
		std::string ans {};
		for (int i = 0, j = 0, n = s.size(); i < n; i++) {
			if (j < spaces.size() and i == spaces[j]) {
				ans += ' ';
				j++;
			}
			ans += s[i];
		}
		return ans;
	}
};