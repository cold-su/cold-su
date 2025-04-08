class Solution {
public:
	bool canConstruct(string a, string b) {
		std::array<int, 26> p;
		for (char c : b) {
			p[c - 'a']++;
		}
		for (char c : a) {
			p[c - 'a']--;
			if (p[c - 'a'] < 0) {
				return false;
			}
		}
		return true;
	}
};