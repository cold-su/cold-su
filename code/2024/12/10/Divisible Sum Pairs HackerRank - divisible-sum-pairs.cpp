#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n, k;
	std::cin >> n >> k;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((nums[i] + nums[j]) % k == 0) {
				ans++;
			}
		}
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
