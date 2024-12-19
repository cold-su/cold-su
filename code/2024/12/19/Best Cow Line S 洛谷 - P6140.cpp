#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n;
	std::cin >> n;

	std::string s;
	for (int i = 0; i < n; i++) {
		char a;
		std::cin >> a;
		s += a;
	}

	std::string ans;
	while (ans.size() != n) {
		auto t = s;
		std::reverse(s.begin(), s.end());
		if (s < t) {
			ans += *s.begin();
			s = s.substr(1);
		} else {
			ans += *t.begin();
			s = t.substr(1);
		}
	}

	for (int i = 1; i <= n; i++) {
		std::cout << ans[i - 1] << (std::string []) {"", "\n"} [i % 80 == 0];
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
