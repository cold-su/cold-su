#include <bits/stdc++.h>
const bool MULTI = false;

void solve() {
	int n;
	std::cin >> n;
	std::vector<bool> f;
	for (int i = 0; i < n; i++) {
		double a;
		int t;
		std::cin >> a >> t;
		for (int j = 1; j <= t; j++) {
			int p = floor(a * j);
			if (p >= f.size()) {
				f.resize(p + 1);
			}
			f[p] = !f[p];
		}
	}
	for (int i = 1; i < f.size(); i++) {
		if (f[i] == true) {
			std::cout << i;
			return;
		}
	}
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (MULTI) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
