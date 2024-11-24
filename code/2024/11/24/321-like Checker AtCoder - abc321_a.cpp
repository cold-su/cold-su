#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	std::string s;
	std::cin >> s;

	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] <= s[i + 1]) {
			std::cout << "No";
			return;
		}
	}

	std::cout << "Yes";
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
