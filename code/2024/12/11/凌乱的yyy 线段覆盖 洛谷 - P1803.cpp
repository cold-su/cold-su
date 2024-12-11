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
	std::vector<std::pair<int, int> > nums(n);
	for (int i = 0; i < n; i++) {
		auto& [l, r] = nums[i];
		std::cin >> l >> r;
	}

	sort(nums.begin(), nums.end(), [] (const auto a, const auto b) {
		return a.second < b.second;
	});

	int p = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		auto [l, r] = nums[i];

		if (p <= l) {
			p = r;
			ans++;
		}
	}

	std::cout << ans;
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
