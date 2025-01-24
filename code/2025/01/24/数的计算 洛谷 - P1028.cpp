#include <bits/stdc++.h>
const bool MULTI = false;

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> f(n + 1, 1);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i / 2; j++) {
			f[i] += f[j];
		}
	}
	std::cout << f.back();
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
