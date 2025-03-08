#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int m, n;
		std::cin >> m >> n;
		std::map<int, std::vector<int>> wei, val;
		int p = 0;
		for (int i = 0; i < n; i++) {
			int a, b, c;
			std::cin >> a >> b >> c;
			wei[c].push_back(a);
			val[c].push_back(b);
			p = std::max(p, c);
		}
		m++;
		std::vector<int> f(m);
		for (int i = 1; i <= p; i++) {
			std::vector<int> nf(m);
			for (int j = 1; j < m; j++) {
				for (int k = 0, s = wei[i].size(); k < s; k++) {
					nf[j] = std::max(nf[j], f[j]);
					if (j >= wei[i][k]) {
						nf[j] = std::max(nf[j], f[j - wei[i][k]] + val[i][k]);
					}
				}
			}
			f = nf;
		}
		std::cout << f.back();
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
