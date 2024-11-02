#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	int n;
	std::cin >> n;

	if (1900 <= n)
		std::cout << "Division 1\n";
	if (1600 <= n && n <= 1899)
		std::cout << "Division 2\n";
	if (1400 <= n && n <= 1599)
		std::cout << "Division 3\n";
	if (n <= 1399)
		std::cout << "Division 4\n";
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
