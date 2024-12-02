#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}

	std::vector<int> dp(n);

	for (int i = 0; i < n; i++) {
		dp[i] = std::max((i - 1 >= 0 ? dp[i - 1] : 0LL), (i - 2 >= 0 ? dp[i - 2] : 0LL) + nums[i]);
	}

	std::cout << dp[n - 1] << "\n";
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
