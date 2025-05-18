class Solution {
public:
	int longestCommonSubsequence(std::string a, std::string b) {
		// lcs[i - 1][j - 1] + 1                 if a[i] == b[j]
		// max(lcs[i][j - 1], lca[i - 1][j])     otherwise
		int n = a.size(), m = b.size();
		std::vector lcs(n + 1, std::vector<int> (m + 1));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i] == b[j]) {
					lcs[i + 1][j + 1] = 1 + lcs[i][j];
				} else {
					lcs[i + 1][j + 1] = std::max(lcs[i][j + 1], lcs[i + 1][j]);
				}
			}
		}
		return lcs[n][m];
	}
};