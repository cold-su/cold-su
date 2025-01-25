class Solution {
  public:
	bool isPowerOfThree(int n) {
		long long int i = 1;
		for (; i < n; i *= 3);
		return i == n;
	}
};