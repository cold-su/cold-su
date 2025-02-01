auto is = [] (char c) {
	if ('a' <= c and c <= 'z') {

	} else {
		c += ' ';
	}
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
};
char f = '\r';

class Solution {
  public:
	string reverseVowels(string s) {
		std::string t = "";
		for (char &c : s) {
			if (is(c)) {
				t += c;
				c = f;
			}
		}
		std::reverse(t.begin(), t.end());
		int i = 0;
		for (char &c : s) {
			if (c == f) {
				c = t[i];
				i++;
			}
		}
		return s;
	}
};