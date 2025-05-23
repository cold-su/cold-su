#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	std::string s;
	std::cin >> s;

	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		char t = s[i];
		ans += (t == '0' || t == '6' || t == '9') + (t == '8' ? 2LL : 0LL);
	}

	std::cout << ans;
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
