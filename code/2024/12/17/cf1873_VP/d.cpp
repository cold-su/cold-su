#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = true;
#define int long long int

void solve() {
	int n, k;
	std::string s;
	std::cin >> n >> k >> s;

	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'B') {
			int l = k - 1;
			ans++;
			i += l;
			continue;
		}
	}

	std::cout << ans << "\n";
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
