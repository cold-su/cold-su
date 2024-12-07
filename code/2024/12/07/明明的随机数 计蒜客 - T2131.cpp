#include <bits/stdc++.h>

#define int long long int

void solve() {
	freopen("random.in", "r", stdin);
	freopen("random.out", "w", stdout);

	int n;
	std::cin >> n;

	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}

	std::sort(nums.begin(), nums.end());
	auto i = std::unique(nums.begin(), nums.end());
	nums.resize(std::distance(nums.begin(), i));

	std::cout << nums.size() << "\n";
	for (int i : nums) {
		std::cout << i << " ";
	}
}

signed main() {
	solve();
	return 0;
}
