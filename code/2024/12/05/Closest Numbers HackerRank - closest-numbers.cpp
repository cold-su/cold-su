#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}
	sort(nums.begin(), nums.end());

	int m = INT_MAX;
	for (int i = 0; i + 1 < n; i++) {
		m = std::min((int) abs(nums[i + 1] - nums[i]), m);
	}

	for (int i = 0; i + 1 < n; i++) {
		if (abs(nums[i + 1] - nums[i]) == m) {
			std::cout << nums[i] << " " << nums[i + 1] << " \n"[i + 1 == n - 1];
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
