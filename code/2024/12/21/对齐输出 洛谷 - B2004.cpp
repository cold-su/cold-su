#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int a, b, c;
	std::cin >> a >> b >> c;

	for (int i : {a, b, c}) {
		auto s = std::to_string(i);
		int n = 8 - s.size();
		while (n-- > 0) {
			std::cout << " ";
		}
		std::cout << i << " ";
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
