#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int l, r;
	std::cin >> l >> r;

	int ans = 0;
	std::map<char, int> map;
	for (int i = l; i <= r; i++) {
		map.clear();
		auto s = std::to_string(i);

		for (char c : s) {
			map[c]++;
		}

		bool is = true;
		for (char c : s) {
			if (c - '0' != map[c]) {
				is = false;
				break;
			}
		}

		ans += (int []) {0, i} [is];
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
