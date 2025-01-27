class Solution {
  public:
	bool canConstruct(string s, string t) {
		std::vector<int> p(26);
		for (int i = 0; i < t.size(); i++) {
			p[t[i] - 'a']++;
		}
		for (int i = 0; i < s.size(); i++) {
			p[s[i] - 'a']--;
		}
		for (int x : p) {
			if (x < 0) {
				return false;
			}
		}
		return true;
	}
};