#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n, p;
	std::cin >> n >> p;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}

	std::vector<int> temp(n);
	for (int i = 0; i < n; i++) {
		temp[i] = nums[i] - (i ? nums[i - 1] : 0LL);
	}

	while (p--) {
		size_t a, b, c;
		std::cin >> a >> b >> c;

		a--;
		temp[a] += c;
		temp[b] -= c;
	}

	for (int i = 0; i < n; i++) {
		nums[i] = temp[i] + (i ? nums[i - 1] : 0LL);
	}

	std::cout << std::ranges::min(nums);
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
