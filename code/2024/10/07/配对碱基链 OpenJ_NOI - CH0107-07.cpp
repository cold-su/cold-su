#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	std::string s;
	std::cin >> s;

	for (auto i : s) {
		if (i == 'A') {
			std::cout << "T";
		} else if (i == 'T') {
			std::cout << "A";
		} else if (i == 'C') {
			std::cout << "G";
		} else if (i == 'G') {
			std::cout << "C";
		}
	}
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--) { solve(); }
	} else solve();
	return 0;
}