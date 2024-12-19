#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = true;
#define int long long int

void solve() {
	std::string a, b, c, d;
	std::cin >> a >> b >> c >> d;

	if (a[0] == 'y' and b[0] == 'y' and c == "ding" and d == "zhen") {
		std::cout << "Yes\n";
	} else {
		std::cout << "No\n";
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
