#include <bits/stdc++.h>

const bool HAVE_MULTIPLE_TESTCASES = true;
#define int long long int

void solve() {
	int n, k;
	std::cin >> n >> k;

	std::vector<int> nums(n);
	int cur = 0;
	for (int i = k - 1; i < n; i += k) {
		nums[i] = ++cur;
	}

	for (int i = 0; i < n; i++) {
		if (nums[i] == 0) {
			nums[i] = ++cur;
		}
		std::cout << nums[i] << " \n"[i == n - 1];
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
