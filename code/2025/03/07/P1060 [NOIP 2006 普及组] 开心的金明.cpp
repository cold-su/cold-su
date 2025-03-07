#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using i64 = long long;
	void solve() {
		int n, m;
		std::cin >> n >> m;
		std::vector<int> a(m), b(m);
		for (int i = 0; i < m; i++) {
			std::cin >> a[i] >> b[i];
		}
		n++;
		std::vector<i64> f(n);
		for (int i = 0; i < m; i++) {
			std::vector<i64> nf(n);
			for (int j = 1; j < n; j++) {
				if (j - a[i] >= 0) {
					nf[j] = std::max(f[j], f[j - a[i]] + a[i] * b[i]);
				} else {
					nf[j] = f[j];
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
