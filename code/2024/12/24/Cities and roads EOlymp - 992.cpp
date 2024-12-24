#include <bits/stdc++.h>

const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::vector g(n, std::vector<int>(n));
	for (auto& x : g) {
		for (int& i : x) {
			std::cin >> i;
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cnt += g[i][j] == g[j][i] and i != j and g[i][j] == 1;
		}
	}
	std::cout << cnt / 2;
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
