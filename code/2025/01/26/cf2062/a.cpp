#include <bits/stdc++.h>
const bool MULTI = true;

void solve() {
	std::string s;
	std::cin >> s;
	int ans = 0;
	for (char c : s) {
		ans += c == '1';
	}
	std::cout << ans << "\n";
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
