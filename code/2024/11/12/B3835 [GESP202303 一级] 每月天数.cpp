#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int a, b;
	std::cin >> a >> b;

	bool is = a % 400 == 0 || (a % 4 == 0 && a % 100 != 0);

	if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
		std::cout << 31;
		return;
	} else {
		if (b == 2) {
			std::cout << 28 + is;
			return;
		}
		std::cout << 30;
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
