#include <bits/stdc++.h>

const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n, m;
	std::cin >> n >> m;
	int curr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << ++curr << " \n"[j == m - 1];
		}
	}
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
