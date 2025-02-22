class Solution {
public:
	int minimumSize(vector<int>& a, int k) {
		uint l = 0, r = 1e9;
		while (l + 1 < r) {
			uint mid = l + (r - l) / 2;
			uint p = 0;
			for (int x : a) {
				p += (x - 1) / mid;
			}
			(p <= k ? r : l) = mid;
		}
		return r;
	}
};