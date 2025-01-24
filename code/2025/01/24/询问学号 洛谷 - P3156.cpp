#include <bits/stdc++.h>
const bool MULTI = false;

void solve() {
	int n, q;
	std::cin >> n >> q;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}
	while (q--) {
		int x;
		std::cin >> x;
		std::cout << nums[x - 1] << "\n";
	}
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (MULTI) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
