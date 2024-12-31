#include <bits/stdc++.h>

const bool MULTI = false;
#define int long long int

void solve() {
	int m, n;
	std::cin >> m >> n;
	std::deque<int> d;
	int ans = 0;
	while (n--) {
		int a;
		std::cin >> a;
		bool f = false;
		for (int x : d) {
			if (x == a) {
				f = true;
			}
		}
		if (f == false) {
			d.emplace_back(a);
			ans++;
		}
		auto it = std::unique(d.begin(), d.end());
		d.resize(std::distance(d.begin(), it));
		if (d.size() > m) {
			d.pop_front();
		}
	}
	std::cout << ans;
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
