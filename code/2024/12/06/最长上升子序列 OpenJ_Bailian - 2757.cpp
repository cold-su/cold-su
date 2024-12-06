#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}

	std::vector<int> dp(n);

	int ans = 0;
	for (int i = 0; i < n; i++) {
		/* why there must be a dp[i] = 1 ? can i
		move it to the position of declaration of dp? */
		dp[i] = 1;
		for (int j = 0; j < n; j++) {
			if (nums[j] < nums[i]) {
				dp[i] = std::max(dp[i], dp[j] + 1);
			}
		}

		ans = std::max(dp[i], ans);
	}

	std::cout << ans;
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
