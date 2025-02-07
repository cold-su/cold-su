class Solution {
  public:
	bool isPalindrome(int x) {
		auto s = std::to_string(x);
		for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
			if (s[i] != s[j]) {
				return false;
			}
		}
		return true;
	}
};