#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	std::string s, t;
	std::cin >> s >> t;

	int m = 1;
	for (char i : s) {
		m *= i - 'A' + 1;
	}

	int n = 1;
	for (char i : t) {
		n *= i - 'A' + 1;
	}

	std::cout << (n % 47 == m % 47 ? "GO" : "STAY");
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
