class Solution {
public:
	int lengthOfLIS(vector<int>& a) {
		int n = a.size();
		std::vector<int> f(n, 1);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (a[j] < a[i]) {
					f[i] = std::max(f[i], f[j] + 1);
				}
			}
		}
		return std::ranges::max(f);
	}
};