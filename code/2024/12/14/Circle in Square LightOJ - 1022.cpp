#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		double r;
		std::cin >> r;

		double pi = 2 * acos(0.0);

		std::cout << std::fixed << std::setprecision(2);

		std::cout << "Case " << i + 1 << ": " << r * 2 * 2 * r - r * r * pi << "\n";
	}

	return 0;
}
