#include <bits/stdc++.h>

const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::vector g(n, std::vector<int>(n));
	for (auto& i : g) {
		for (int& j : i) {
			std::cin >> j;
		}
	}
	for (int i = 0; i < n; i++) {
		std::vector<int> t;
		for (int j = 0; j < n; j++) {
			if (g[i][j] == 1) {
				t.emplace_back(j + 1);
			}
		}
		std::cout << t.size() << " ";
		int m = t.size();
		for (int j = 0; j < m; j++) {
			std::cout << t[j] << " \n"[j == m - 1];
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
