#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;

	int len = 7;
	std::vector<int> nums(len);
	for (int i = 0; i < len; i++) {
		std::cin >> nums[i];
	}

	for (int i = 0; i < len; i++) {
		n -= nums[i];
		if (n <= 0) {
			std::cout << i + 1;
			return;
		}

		if (i == 6) {
			i = -1;
		}
	}
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
