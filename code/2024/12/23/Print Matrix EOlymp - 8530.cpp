#include <bits/stdc++.h>

const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::vector nums(n, std::vector<int>(n));
	for (auto& x : nums) {
		for (int& i : x) {
			std::cin >> i;
		}
	}
	int l, c;
	std::cin >> l >> c;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < l and j < c) {
				std::cout << nums[i][j] << " \n"[j == c - 1];
			}
		}
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
