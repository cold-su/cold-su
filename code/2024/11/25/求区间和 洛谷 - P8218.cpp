#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);

	for (int& i : nums) {
		std::cin >> i;
	}

	int q;
	std::cin >> q;

	while (q--) {
		int l, r;
		std::cin >> l >> r;
		l--;
		int ans = 0;
		for (int i = l; i < r; i++) {
			ans += nums[i];
		}

		std::cout << ans << "\n";
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
