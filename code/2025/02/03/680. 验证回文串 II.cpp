class Solution {
  public:
	std::string s;
	bool validPalindrome(string s) {
		this->s = s;
		int i = 0, j = s.size() - 1;
		while (i < j) {
			if (s[i] != s[j]) {
				return work(i + 1, j) || work(i, j - 1);
			} else {
				i++, j--;
			}
		}
		return true;
	}

	bool work(int i, int j) {
		while (i < j) {
			if (s[i] != s[j]) {
				return false;
			} else {
				i++, j--;
			}
		}
		return true;
	}
};