#include <vector>
#include <iostream>

#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	int l, n;
	std::cin >> l >> n;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}

	int ans_l = 0;
	int ans_r = 0;
	for (int i = 0; i < n; i++) {
		ans_l = std::max(ans_l, std::min(nums[i], l - nums[i]));
		ans_r = std::max(ans_r, std::max(nums[i], l - nums[i]));
	}

	std::cout << ans_l << " " << ans_r << "\n";
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
