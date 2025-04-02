#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n, m, x;
		std::cin >> n >> m >> x;
		n++, m++;
		std::vector a(n, std::vector<char> (m));
		for (int i = 1; i < n; i++) {
			for (int j = 1; j < m; j++) {
				char c;
				std::cin >> c;
				a[i][j] = c;
			}
		}
		std::vector f(n, std::vector<int> (m));
		for (int k = 0; k <= x; k++) {
			std::vector nf(n, std::vector<int> (m));
			for (int i = 1; i < n; i++) {
				for (int j = 1; j < m; j++) {
					nf[i][j] = std::max(nf[i - 1][j], nf[i][j - 1]) + (a[i][j] == '1');
					if (a[i][j] == '?' and k) {
						nf[i][j] = std::max(nf[i][j], std::max(f[i - 1][j], f[i][j - 1]) + 1);
					}
				}
			}
			std::swap(f, nf);
		}
		std::cout << f.back().back() << "\n";
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	int t;
	std::cin >> t;
	while (t--) {
		p.solve();
	}
	return 0;
}
