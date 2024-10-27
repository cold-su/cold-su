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

	std::vector<std::pair<int, int>> nums(n);
	for (auto& [a, b] : nums) {
		std::cin >> a >> b;
	}

	std::sort(nums.begin(), nums.end(), [] (const auto l, const auto r) {
		auto [a, b] = l;
		auto [_a, _b] = r;

		if (b == _b) {
			return a > _a;
		} else {
			return b > _b;
		}
	});

	int cnt = 1, i = 0, ans = 0;
	while (cnt-- && i < nums.size()) {
		cnt += nums[i].second;
		ans += nums[i].first;
		i++;
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
