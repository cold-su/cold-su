#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;

	double ans = 1;
	auto temp = [] (int n) {
		int ans = 1;
		for (int i = 1; i <= n; i++) {
			ans *= i;
		}
		return ans;
	};
	for (int i = 1; i <= n; i++) {
		ans += 1 / (double) temp(i);
	}

	std::cout << std::fixed << std::setprecision(10);
	std::cout << ans;
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
