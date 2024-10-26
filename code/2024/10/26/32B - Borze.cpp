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
	std::getline(std::cin, s);

	for (int i = 0; i < (int)s.size(); i++) {
		if (s[i] == '.') {
			std::cout << 0;
		} else {
			i++;
			if (s[i] == '.') {
				std::cout << 1;
			} else {
				std::cout << 2;
			}
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
