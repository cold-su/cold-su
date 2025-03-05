class Solution {
public:
	string breakPalindrome(string s) {
		if (s.size() == 1) {
			return "";
		}
		if (make(s)) {
			s.back() = 'b';
			return s;
		}
		int n = s.size();
		for (int i = 0; i < n; i++) {
			if (s[i] != 'a') {
				s[i] = 'a';
				break;
			}
		}
		return s;
	}

	bool make(std::string s) {
		int n = s.size();
		for (int i = 0, j = n - 1; i < j; i++, j--) {
			if (s[i] != 'a' || s[j] != 'a') {
				return false;
			}
		}
		return true;
	}
};