#include <bits/stdc++.h>

const bool MULTI = true;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int& x : nums) {
		std::cin >> x;
	}
	int curr = 0;
	for (int i = 0; i < n; i++) {
		curr += (nums[i] == curr + 1) + 1;
	}
	std::cout << curr << "\n";
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
