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
	int n, m;
	std::cin >> n >> m;
	std::vector<int> nums(m);
	for (int& i : nums) {
		std::cin >> i;
	}

	int ans = n - std::accumulate(nums.begin(), nums.end(), 0);
	std::cout << (ans < 0 ? (int)-1 : ans);
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--) { solve(); }
	} else solve();
	return 0;
}