#include <bits/stdc++.h>

const bool MULTI = true;
using namespace std;
#define int long long int

void solve() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int& x : nums) {
		cin >> x;
	}
	ranges::sort(nums);
	cout << max(nums.at(0) * nums.at(1), nums.at(n - 2) * nums.at(n - 1)) << "\n";
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
