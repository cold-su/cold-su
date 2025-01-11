#include <bits/stdc++.h>

const bool MULTI = false;
using namespace std;
#define int long long int

void solve() {
	int n;
	cin >> n;
	map<int, int> map;
	while (n--) {
		map[n + 1] = 0;
	}
	for (int i = 0; i < 3; i++) {
		int p;
		cin >> p;
		while (p--) {
			int x;
			cin >> x;
			map[x]++;
		}
	}
	int ans = 0;
	for (auto [_, x] : map) {
		ans += x != 1;
	}
	cout << ans;
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
