class Solution {
  public:
	bool isPerfectSquare(int c) {
		for (unsigned i = 1; (uint64_t) i * i <= c; i++) {
			if (i == c / i and i * (c / i) == c) {
				return true;
			}
		}
		return false;
	}
};