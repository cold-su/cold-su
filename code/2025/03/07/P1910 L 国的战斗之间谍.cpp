#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n, m, x;
		std::cin >> n >> m >> x;
		__sol(n, m, x);
	}

	void __sol(int n, int h, int t) {
		std::vector<int> a(n), b(n), c(n);
		for (int i = 0; i < n; i++) {
			std::cin >> c[i] >> a[i] >> b[i];
		}
		h++, t++;
		std::vector f(h, std::vector<int> (t));
		for (int i = 0; i < n; i++) {
			std::vector nf(h, std::vector<int> (t));
			for (int j = 1; j < h; j++) {
				for (int k = 1; k < t; k++) {
					nf[j][k] = f[j][k];
					if (j - a[i] >= 0 and k - b[i] >= 0) {
						nf[j][k] = std::max(nf[j][k], f[j - a[i]][k - b[i]] + c[i]);
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
