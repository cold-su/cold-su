#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int v, g;
		std::cin >> v >> g;
		int n;
		std::cin >> n;
		std::vector<int> val(n), vol(n), wei(n);
		for (int i = 0; i < n; i++) {
			std::cin >> val[i] >> vol[i] >> wei[i];
		}
		v++, g++;
		std::vector f(v, std::vector<int> (g));
		for (int i = 0; i < n; i++) {
			std::vector nf(v, std::vector<int> (g));
			for (int j = 1; j < v; j++) {
				for (int k = 1; k < g; k++) {
					nf[j][k] = f[j][k];
					if (j - vol[i] >= 0 and k - wei[i] >= 0) {
						nf[j][k] = std::max(nf[j][k], f[j - vol[i]][k - wei[i]] + val[i]);
					}
				}
			}
			f = nf;
		}
		std::cout << f.back().back();
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
