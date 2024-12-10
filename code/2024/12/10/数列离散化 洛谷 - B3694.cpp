#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = true;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}

	auto t = nums;
	sort(t.begin(), t.end());
	auto ite = std::unique(t.begin(), t.end());
	t.resize(std::distance(t.begin(), ite));

	for (int i = 0; i < n; i++) {
		int k = nums[i];

		std::cout << std::distance(t.begin(), std::lower_bound(t.begin(), t.end(), k)) + 1 << " \n"[i == n - 1];
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
