class Solution {
public:
	int longestCommonSubsequence(string s, string t) {
		int n = s.size(), m = t.size();
		n++, m++;
		std::vector<int> f(m);
		for (int i = 1; i < n; i++) {
			std::vector<int> nf(m);
			for (int j = 1; j < m; j++) {
				if (s[i - 1] == t[j - 1]) {
					nf[j] = f[j - 1] + 1;
				} else {
					nf[j] = std::max(nf[j - 1], f[j]);
				}
			}
			f = nf;
		}
		return f.back();
	}
};