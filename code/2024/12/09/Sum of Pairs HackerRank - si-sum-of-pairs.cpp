#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = true;
#define int long long int

void solve() {
	int n, k;
	std::cin >> n >> k;
	std::vector<int> nums(n);
	std::map<int, int> map;
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
		map[nums[i]] = i;
	}

	for (int i = 0; i < n; i++) {
		if (map.find(k - nums[i]) != map.end() and map[k - nums[i]] != i) {
			std::cout << "True\n";
			return;
		}
	}

	std::cout << "False\n";
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
