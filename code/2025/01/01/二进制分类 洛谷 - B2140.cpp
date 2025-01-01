#include <bits/stdc++.h>

const bool MULTI = false;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	int ans[2] {};
	for (int i = 1; i <= n; i++) {
		int cnt[2] {};
		int t = i;
		while (t) {
			if (t & 1) {
				cnt[0]++;
			} else {
				cnt[1]++;
			}
			t >>= 1;
		}
		if (cnt[0] > cnt[1]) {
			ans[0]++;
		} else {
			ans[1]++;
		}
	}
	for (int i = 0; i < 2; i++) {
		std::cout << ans[i] << " \n"[i == 1];
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
