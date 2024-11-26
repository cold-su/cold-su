#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
#define pi 3.14

	int r;
	std::cin >> r;

	std::cout << std::fixed << std::setprecision(5);

	std::cout << 4 / (double) 3 * pi * pow(r, 3);

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
