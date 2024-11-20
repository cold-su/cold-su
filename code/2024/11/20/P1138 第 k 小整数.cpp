#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n, k;
	std::cin >> n >> k;
	std::vector<int> nums(n);
	for (int& i : nums) {
		std::cin >> i;
	}

	std::ranges::sort(nums);
	auto it = std::unique(nums.begin(), nums.end());
	nums.resize(std::distance(nums.begin(), it));

	size_t p = k;
	if (p != k || p >= nums.size()) {
		std::cout << "NO RESULT";
	} else {
		p--;
		std::cout << nums[p];
	}
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
