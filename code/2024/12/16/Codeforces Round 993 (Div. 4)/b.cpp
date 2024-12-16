#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = true;
#define int long long int

void solve() {
	std::string s;
	std::cin >> s;

	for (size_t i = s.size(); i--;) {
		if (s[i] == 'p') {
			std::cout << 'q';
		} else if (s[i] == 'q') {
			std::cout << "p";
		} else {
			std::cout << s[i];
		}
	}
	std::cout << "\n";
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
