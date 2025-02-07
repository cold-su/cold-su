const int mx = 31622;
int p[mx + 1] {};
auto init = [] {
	for (int i = 2; i <= mx; i++) {
		if (p[i] == 0) {
			p[i] = p[i - 1] + 1;
			for (int j = i * i; j <= mx; j += i) {
				p[j] = -1;
			}
		} else {
			p[i] = p[i - 1];
		}
	}
	return 0;
} ();

class Solution {
  public:
	int nonSpecialCount(int l, int r) {
		return r - l + 1 - p[(int) sqrt(r)] + p[(int) sqrt(l - 1)];
	}
};