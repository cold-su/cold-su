#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int x, _x;
	int y, _y;
	std::cin >> x >> _x >> y >> _y;

	for (int  i : {x, _x}) {
		for (int j : {y, _y}) {
			if (!(INT_MIN <= i * j && i * j <= INT_MAX)) {
				std::cout << "long long int";
				return;
			}
		}
	}

	std::cout << "int";
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
