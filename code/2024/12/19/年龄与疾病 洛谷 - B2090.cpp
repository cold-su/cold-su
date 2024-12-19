#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	int cnt[4] {};
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
#define r(a, b) (a) <= nums[i] and nums[i] <= b
		if (r(0, 18)) {
			cnt[0]++;
		} else if (r(19, 35)) {
			cnt[1]++;
		} else if (r(36, 60)) {
			cnt[2]++;
		} else if (r(61, 100)) {
			cnt[3]++;
		}
	}

	std::cout << std::fixed << std::setprecision(2);
	for (int i = 0; i < 4; i++) {
		std::cout << .1e3 * cnt[i] / n << "%\n";
	}
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
