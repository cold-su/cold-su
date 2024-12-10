#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = true;
#define int long long int

void solve() {
	int n;
	std::cin >> n;

	int t = (n / 5 + 1) * 5;

	if (t - n >= 3 or t <= 38) {
		std::cout << n << "\n";
	} else {
		std::cout << t << "\n";
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
