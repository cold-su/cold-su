class Solution {
  public:
	int subtractProductAndSum(int n) {
		long long a = 0, b = 1;
		while (n > 0) {
			a += n % 10;
			b *= n % 10;
			n /= 10;
		}
		return b - a;
	}
};