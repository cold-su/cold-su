#include <bits/stdc++.h>

const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int l, r;
	std::cin >> l >> r;
	int ans = 0;
	for (int i = l; i < r + 1; i++) {
		for (int j = i + 1; j < r + 1; j++) {
			ans = std::max(ans, i ^ j);
		}
	}
	std::cout << ans;
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
