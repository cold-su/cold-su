#include <bits/stdc++.h>

const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int ans = 0;
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int& x : nums) {
		std::cin >> x;
		ans = std::max(ans, x);
	}
	for (int i = 0; i < n; i++) {
		if (nums.at(i) == ans) {
			std::cout << i + 1;
			return;
		}
	}
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
