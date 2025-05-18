class Solution {
public:
	int lengthOfLIS(std::vector<int>& a) {
		int n = a.size();
		std::vector<int> f(n + 1);
		f[n] = 0; // the answer of empty set is always 0
		for (int i = n; i--;) {
			f[i] = std::max(f[i], 1 + f[n]); // it can be LIS itself
			// f[i] = 1 + max{ LIS(j) for j = n - 1 downto i + 1 }
			for (int j = i + 1; j < n; j++) {
				if (a[i] < a[j]) {
					f[i] = std::max(f[i], 1 + f[j]);
				}
			}
		}
		return std::ranges::max(f); // max{ LIS(i) for i = n downto 0 }
	}
};