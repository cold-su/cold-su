#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n, t, c;
	std::cin >> n >> t >> c;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}

	int ans = 0;

	std::deque<int> d;

	for (int i = 0; i < n; i++) {
		int a = nums[i];

		if (d.size() < c and a <= t) {
			d.push_back(a);
		}

		if (a > t) {
			d.clear();
		}

		if (d.size() >= c) {
			ans++;
			d.pop_front();
		}

	}

	std::cout << ans;
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
