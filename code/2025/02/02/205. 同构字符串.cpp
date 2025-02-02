class Solution {
  public:
	bool isIsomorphic(string s, string t) {
		std::map<char, char> map, tmp;
		for (int i = 0; i < s.size(); i++) {
			if (map.count(s[i]) and map[s[i]] != t[i] || tmp.count(t[i]) and tmp[t[i]] != s[i]) {
				return false;
			}
			map[s[i]] = t[i];
			tmp[t[i]] = s[i];
		}
		return true;
	}
};