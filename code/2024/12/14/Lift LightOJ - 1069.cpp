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
		int m, n;
		std::cin >> m >> n;

		int t = abs(n - m);
		t *= 4;
		t += 3 + 5 + 3;
		t += m * 4;
		t += 3 + 5;

		std::cout << "Case " << i + 1 << ": " << t << "\n";

	}

	return 0;
}
