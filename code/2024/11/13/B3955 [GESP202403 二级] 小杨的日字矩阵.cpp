#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0 || j == n - 1) {
				std::cout << "|";
				continue;
			}
			std::cout << (i == 0 || i == (n - 1) / 2 || i == n - 1 ? "-" : "x");
		}
		std::cout << "\n";
	}
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
