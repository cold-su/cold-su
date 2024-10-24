#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (auto& i : nums) 
		std::cin >> i;

	int cnt = 1, ans = 1;
	for (int i = 0; i + 1 < nums.size(); i++) {
		if (nums[i + 1] > nums[i]) {
			cnt++;
		} else {
			cnt = 1;
		}

		ans = std::max(cnt, ans);
	}

	std::cout << ans;
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--) { solve(); }
	} else solve();
	return 0;
}
