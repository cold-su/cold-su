class Solution {
public:
	int findLongestChain(std::vector<std::vector<int>>& pairs) {
		int n = pairs.size();
		std::ranges::sort(pairs);
		std::vector<int> f(n, 1);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (pairs[j][1] < pairs[i][0]) {
					f[i] = std::max(f[i], f[j] + 1);
				}
			}
		}
		return std::ranges::max(f);
	}
};