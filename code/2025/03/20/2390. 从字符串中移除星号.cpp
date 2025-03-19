class Solution {
public:
	string removeStars(string s) {
		std::string ans;
		for (char c : s) {
			if (c == '*') {
				if (ans.size() != 0) {
					ans.pop_back();
				}
			} else {
				ans += c;
			}
		}
		return ans;
	}
};