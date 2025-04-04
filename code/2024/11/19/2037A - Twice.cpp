#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);

	for (int& i : nums) {
		std::cin >> i;
	}

	std::map<int, int> map;

	for (int i = 0; i < n; i++) {
		map[nums[i]]++;
	}

	int cnt = 0;
	for (auto& [k, v] : map) {
		while (v - 2 >= 0) {
			cnt++;
			v -= 2;
		}
	}

	deb("{}", cnt);
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
