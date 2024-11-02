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
	int a, b, c;
	std::cin >> a >> b >> c;

	std::vector<int> nums { a, b, c };
	std::ranges::sort(nums);

	int ans = 0;
	for (int i = 0; i < nums.size(); i++) {
		ans += abs(nums[i] - nums[1]);
	}

	println("{}", ans);
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
