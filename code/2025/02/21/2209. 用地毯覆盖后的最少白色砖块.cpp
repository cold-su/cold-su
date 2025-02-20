class Solution {
public:
	int minimumWhiteTiles(string s, int k, int len) {
		int n = s.size();
		std::vector<int> f(n);
		f[0] = s[0] == '1';
		for (int i = 1; i < n; i++) {
			f[i] = f[i - 1] + (s[i] == '1');
		}
		for (int i = 1; i <= k; i++) {
			std::vector<int> nf(n);
			for (int j = len * i; j < n; j++) {
				nf[j] = std::min(nf[j - 1] + (s[j] == '1'), f[j - len]);
			}
			std::swap(f, nf);
		}
		return f[n - 1];
	}
};