#include <bits/stdc++.h>

const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int m, n;
	std::cin >> m >> n;
	std::vector<int> nums(m), temp(n);
	for (int& x : nums) {
		std::cin >> x;
	}
	for (int& x : temp) {
		std::cin >> x;
	}
	sort(nums.begin(), nums.end());
	int ans = 0;
	for (int x : temp) {
		int p = std::distance(nums.begin(), std::lower_bound(nums.begin(), nums.end(), x));
		int l = std::max(0LL, p - 1);
		int r = std::min(m - 1, p + 1);
		int t = std::min({abs(nums[l] - x), abs(nums[r] - x), abs(nums[p] - x)});
		ans += t;
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
