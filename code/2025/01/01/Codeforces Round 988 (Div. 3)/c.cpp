#include <bits/stdc++.h>

const bool MULTI = true;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	if (n <= 4) {
		std::cout << "-1\n";
		return;
	}
	for (int i = 1; i <= n; i += 2) {
		if (i == 5) {
			continue;
		}
		std::cout << i << " ";
	}
	std::cout << "5 4 ";
	for (int i = 2; i <= n; i += 2) {
		if (i == 4) {
			continue;
		}
		std::cout << i << " \n"[i + 2 > n];
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
