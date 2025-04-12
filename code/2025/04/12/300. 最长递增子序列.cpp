class Solution {
public:
	int lengthOfLIS(vector<int>& a) {
		int n = a.size();
		std::vector<int> b(n, 1);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (a[j] < a[i]) {
					b[i] = std::max(b[i], b[j] + 1);
				}
			}
		}
		return std::ranges::max(b);
	}
};