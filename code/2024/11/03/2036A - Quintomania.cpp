#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	int n;
	std::cin >> n;

	std::vector<int> nums(n);
	for (int& i : nums)
		std::cin >> i;

	bool is = true;
	for (int i = 0; i + 1 < n; i++) {
		if (abs(nums[i] - nums[i + 1]) != 5 && abs(nums[i] - nums[i + 1]) != 7)
			is = false;
	}

	println("{}", is ? "YES" : "NO");
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
