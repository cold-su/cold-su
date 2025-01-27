class Solution {
  public:
	int peakIndexInMountainArray(vector<int>& a) {
		int n = a.size();
		int l = 0, r = n - 1;
		while (l + 1 < r) {
			int m = l + (r - l) / 2;
			if (a[m - 1] > a[m]) {
				r = m;
			} else {
				l = m;
			}
		}
		return l;
	}
};