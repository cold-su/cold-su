#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using i64 = long long;
	void solve() {
		int n, x;
		std::cin >> n >> x;
		std::vector<int> l(n), w(n), u(n);
		for (int i = 0; i < n; i++) {
			std::cin >> l[i] >> w[i] >> u[i];
		}
		x++;
		std::vector<i64> f(x);
		for (int i = 0; i < n; i++) {
			std::vector<i64> nf(x);
			for (int j = 0; j < x; j++) {
				nf[j] = f[j] + l[i];
				if (j >= u[i]) {
					nf[j] = std::max(nf[j], f[j - u[i]] + w[i]);
				}
			}
			f = nf;
		}
		std::cout << 1LL * f.back() * 5;
	}

};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
