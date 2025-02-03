class Solution {
  public:
	bool isPalindrome(string s) {
		auto check = [] (char c) {
			return !('a' <= c and c <= 'z' || 'A' <= c and c <= 'Z' || '0' <= c and c <= '9');
		};
		auto make = [] (char c) -> int {
			if ('0' <= c and c <= '9') {
				return c - '0';
			}
			if ('A' <= c and c <= 'Z') {
				return c + ' ';
			}
			return c;
		};
		for (int i = 0, j = s.size() - 1; i < j;) {
			if (check(s[i]) || check(s[j])) {
				i += check(s[i]);
				j -= check(s[j]);
			} else {
				if (make(s[i]) != make(s[j])) {
					return false;
				}
				i++, j--;
			}
		}
		return true;
	}
};