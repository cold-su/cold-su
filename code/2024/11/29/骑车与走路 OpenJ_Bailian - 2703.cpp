#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	int t = 27 + 23;

	double walk = 1.2, vehicle = 3.0;

	int n;
	std::cin >> n;

	int v = n / vehicle + t;
	int w = n / walk;

	std::cout << (v <= w ? v < w ? "Bike" : "All" : "Walk") << "\n";
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
