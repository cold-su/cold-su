class Solution {
public:
	int findMin(std::vector<int>& a) {
		// a[l], a[m], a[r]
		// if a[l] < a[m] and a[m] > a[r], a[l] > a[r]
		//       to find m + 1 ... r
		// if a[l] < a[m] < a[r]
		//       to find l ... m - 1
		// if a[l] > a[m] and a[m] < a[r]
		//       to find l + 1 ... m
		int n = a.size();
		int lo = 0, hi = n - 1;
		while (lo + 1 < hi) {
			int m = (lo + hi) / 2;
			if (a[lo] < a[m] and a[m] > a[hi] and a[lo] > a[hi]) {
				lo = m;
			} else if (a[lo] < a[m] and a[m] < a[hi]) {
				hi = m - 1;
			} else if (a[lo] > a[m] and a[m] < a[hi]) {
				hi = m;
				lo = lo + 1;
			}
		}
		return std::min(a[lo], a[hi]);
	}
};