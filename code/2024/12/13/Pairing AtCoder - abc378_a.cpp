#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int a[4] {};
	for (int i = 0; i < 4; i++) {
		int n;
		std::cin >> n;
		a[i] = n;
	}

	int cnt[5] {};
	for (int i = 0; i < 4; i++) {
		cnt[a[i]]++;
	}

	int ans = 0;
	for (int i = 0; i < 5; i++) {
		while (cnt[i] >= 2) {
			cnt[i] -= 2;
			ans++;
		}
	}

	std::cout << ans;
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
