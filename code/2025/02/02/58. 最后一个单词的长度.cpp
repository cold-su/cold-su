class Solution {
  public:
	int lengthOfLastWord(string s) {
		std::string ans = "";
		for (size_t i = s.size(); i--;) {
			if (ans.size() != 0 and s[i] == ' ') {
				break;
			} else if (s[i] != ' ') {
				ans += s[i];
			}
		}
		return ans.size();
	}
};