class Solution {
  public:
	bool judgeSquareSum(int c) {
		auto y = [](int x) {
			return sqrt(x) == (int) sqrt(x);
		};
		for (int i = 0; i * i <= c / 2; i++) {
			if (y(i * i) and y(c - i * i)) {
				return true;
			}
		}
		return false;
	}
};