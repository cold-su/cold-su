class Solution {
public:
	int search(std::vector<int>& a, int t) {
		int n = a.size();
		int lo = 0, hi = n - 1;
		while (lo + 1 < hi) {
			int m = (lo + hi) / 2;
			if (a[m] == t) {
				return m;
			}
			if (a[lo] < a[m] and a[m] > a[hi] and a[lo] > a[hi]) {
				if (a[lo] <= t and t < a[m]) {
					hi = m;
				} else {
					lo = m;
				}
			} else if (a[lo] < a[m] and a[m] < a[hi]) {
				if (a[m] < t) {
					lo = m;
				} else {
					hi = m;
				}
			} else if (a[lo] > a[m] and a[m] < a[hi]) {
				if (a[m] < t and t <= a[hi]) {
					lo = m;
				} else {
					hi = m;
				}
			}
		}
		if (a[lo] == t) {
			return lo;
		}
		if (a[hi] == t) {
			return hi;
		}
		return -1;
	}
};