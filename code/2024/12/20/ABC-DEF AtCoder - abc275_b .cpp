#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int a, b, c, d, e, f;
	std::cin >> a >> b >> c >> d >> e >> f;

	int m = 998244353;
	int l = ((a % m) * (b % m) % m) * (c % m) % m;
	int r = ((d % m) * (e % m) % m) * (f % m) % m;

	std::cout << (l - r + m) % m;
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
