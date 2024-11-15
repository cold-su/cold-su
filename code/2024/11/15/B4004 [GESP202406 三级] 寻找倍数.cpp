#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int& i : nums) {
		std::cin >> i;
	}

	std::sort(nums.rbegin(), nums.rend());

	bool is = true;
	for (int i = 1; i < n; i++) {
		if (nums[0] % nums[i] != 0) {
			is = false;
		}
	}

	std::cout << (is ? "Yes" : "No") << "\n";
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
