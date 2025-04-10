class Solution {
public:
	int maxUncrossedLines(vector<int>& a, vector<int>& b) {
		int n = a.size(), m = b.size();
		std::vector<int> f(m);
		for (int i = 0; i < n; i++) {
			std::vector<int> nf(m);
			for (int j = 0; j < m; j++) {
				if (a[i] == b[j]) {
					if (j) {
						nf[j] = std::max(nf[j], f[j - 1]);
					}
					nf[j]++;
				} else {
					nf[j] = f[j];
					if (j) {
						nf[j] = std::max(nf[j], nf[j - 1]);
					}
				}
			}
			std::swap(f, nf);
		}
		return f.back();
	}
};