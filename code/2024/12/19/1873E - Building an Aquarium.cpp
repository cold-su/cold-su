#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = true;
#define int long long int

void solve() {
	int n, k;
	std::cin >> n >> k;
	std::vector<int> nums(n);
	for (int& i : nums) {
		std::cin >> i;
	}

	int l = 0, r = 2e9 + 7;
	while (l < r) {
		int mid = l + (r - l + 1) / 2;

		int t = 0;
		for (int i = 0; i < n; i++) {
			t += std::max(mid - nums[i], 0LL);
		}

		if (t <= k) {
			l = mid;
		} else {
			r = mid - 1;
		}
	}

	std::cout << l << "\n";
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
