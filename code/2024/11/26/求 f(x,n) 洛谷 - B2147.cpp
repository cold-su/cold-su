#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	double x;
	std::cin >> x;

	int n;
	std::cin >> n;

	auto update = [&] (int n) {
		x = sqrt(n + x);
	};

	for (int i = 1; i <= n; i++) {
		update(i);
	}

	std::cout << std::fixed << std::setprecision(2);
	std::cout << x;
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
