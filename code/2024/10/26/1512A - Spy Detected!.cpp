#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int& i : nums) {
		std::cin >> i;
	}

	std::map<int, int> map;
	for (int i : nums) {
		map[i]++;
	}

	int tar;
	for (auto [k, v] : map) {
		if (v == 1) {
			tar = k;
		}
	}

	for (int i = 0; i < n; i++) {
		if (nums[i] == tar) {
			std::cout << i + 1 << "\n";
		}
	}
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--) { solve(); }
	} else solve();
	return 0;
}
