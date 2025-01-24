#include <bits/stdc++.h>
const bool MULTI = false;

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums {0};
	for (int i = 0; i < n; i++) {
		int x;
		std::cin >> x;
		if (x != nums.back()) {
			nums.push_back(x);
		}
	}
	int ans = 0;
	for (int i = 3; i < nums.size(); i++) {
		ans += nums[i - 2] > nums[i - 1] and nums[i - 1] < nums[i];
	}
	std::cout << ans;
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
