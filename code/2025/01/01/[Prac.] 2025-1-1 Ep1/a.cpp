#include <bits/stdc++.h>

const bool MULTI = false;
#define int long long int

void solve() {
	int t, s, x;
	std::cin >> t >> s >> x;
	int l = std::max(1LL, x - t);
	int r = std::max(1LL, x - t - 1);
	for (int p : {l, r}) {
		if (p % s == 0) {
			std::cout << "YES";
			return;
		}
	}
	std::cout << (x == t ? "YES" : "NO");
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
