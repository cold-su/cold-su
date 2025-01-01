#include <bits/stdc++.h>

const bool MULTI = true;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int& x : nums) {
		std::cin >> x;
	}
	std::ranges::sort(nums);
	int ans = 0;
	for (int i = 0; i + 1 < n; i++) {
		ans += nums[i] == nums[i + 1];
		i += nums[i] == nums[i + 1];
	}
	std::cout << ans << "\n";
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (MULTI) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
