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
	int n, k;
	std::cin >> n >> k;

	std::deque<int> nums(n);
	for (int& i : nums) {
		std::cin >> i;
	}

	std::sort(nums.begin(), nums.end());

	int cnt = 0;
	while (*std::max_element(nums.begin(), nums.begin() + 3) + k <= 5 && nums.size() >= 3) {
		cnt++;

		int __cnt = 3;
		while (__cnt--) {
			nums.pop_front();
		}
	}

	std::cout << cnt << "\n";
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--) { solve(); }
	} else solve();
	return 0;
}
