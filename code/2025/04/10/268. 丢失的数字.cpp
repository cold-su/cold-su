class Solution {
public:
	int missingNumber(vector<int>& a) {
		std::ranges::sort(a);
		int p = 0;
		for (int i = 0, n = a.size(); i < n; i++) {
			if (a[i] != p) {
				break;
			}
			p++;
		}
		return p;
	}
};