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

		std::sort(nums.begin() + l, nums.begin() + r);
	}

	for (int i : nums) {
		std::cout << i << " ";
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
