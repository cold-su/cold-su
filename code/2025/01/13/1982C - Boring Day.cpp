#include <bits/stdc++.h>

const bool MULTI = true;
using namespace std;
#define int long long int

void solve() {
	int n, L, R;
	cin >> n >> L >> R;
	vector<int> nums(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> nums[i];
	}
	partial_sum(nums.begin(), nums.end(), nums.begin());
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		auto it = lower_bound(nums.begin(), nums.end(), L + nums[i - 1]);
		int r = distance(nums.begin(), it);
		r = min(n, r);
		if (L + nums[i - 1] <= nums[r] and nums[r] <= R + nums[i - 1]) {
			ans++;
			i = r;
		}
	}
	cout << ans << "\n";
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
