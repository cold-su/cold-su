#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		std::cin >> n;
		std::vector<int> a(n), b(n);

		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			std::cin >> b[i];
		}

		sort(a.begin(), a.end());
		sort(b.rbegin(), b.rend());

		int ans = 0;
		for (int i = 0; i < n; i++) {
			ans += a[i] * b[i];
		}

		std::cout << "Case #" << i + 1 << ": " << ans << "\n";
	}
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
