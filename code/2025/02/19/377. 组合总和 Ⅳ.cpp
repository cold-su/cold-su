class Solution {
public:
	int combinationSum4(vector<int>& a, int t) {
		int n = a.size();
		std::vector<uint> b(t + 1);
		b[0] = 1;
		for (int i = 1; i <= t; i++) {
			for (int j = 0; j < n; j++) {
				if (i - a[j] >= 0) {
					b[i] += b[i - a[j]];
				}
			}
		}
		return b[t];
	}
};