#include <bits/stdc++.h>

const bool MULTI = false;
using namespace std;
#define int long long int

void solve() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int& x : nums) {
		cin >> x;
	}
	map<int, int> map;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		map[nums[i]]++;
		ans = max(ans, map[nums[i]]);
	}
	cout << ans << " " << map.size() << "\n";
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
