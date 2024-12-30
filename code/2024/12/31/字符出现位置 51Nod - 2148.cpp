#include <bits/stdc++.h>

const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n;
	std::string s;
	char t;
	std::cin >> n >> s >> t;
	int ans = 0;
	for (char x : s) {
		if (x == t) {
			std::cout << ans;
			return;
		}
		ans++;
	}
	std::cout << -1;
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
