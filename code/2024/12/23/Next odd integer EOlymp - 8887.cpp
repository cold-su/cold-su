#include <bits/stdc++.h>

const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	if (n & 1) {
		std::cout << n + 2;
	} else {
		std::cout << n + 1;
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
