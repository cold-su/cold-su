#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n, m;
		std::cin >> n >> m;
		m++;
		std::vector<int> a(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		std::vector<int> f(m);
		f[0] = 1;
		for (int i = 0; i < n; i++) {
			std::vector<int> nf(m);
			nf[0] = 1;
			for (int j = 1; j < m; j++) {
				nf[j] = f[j];
				if (j - a[i] >= 0) {
					nf[j] += f[j - a[i]];
				}
			}
			std::swap(f, nf);
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
