class Solution {
  public:
	vector<int> distributeCandies(int c, int n) {
		std::vector<int> a(n);
		int i = 0, k = 1;
		while (c) {
			if (c - k < 0) {
				a[i] += c;
				return a;
			}
			a[i] += k;
			c -= k;
			k += 1;
			i++;
			if (i >= n) {
				i = 0;
			}
		}
		return a;
	}
};