class Solution {
  public:
	bool isPowerOfFour(int n) {
		long long int i = 1;
		for (; i < n; i *= 4);
		return i == n;
	}
};