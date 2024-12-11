#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n, k;
	std::cin >> n >> k;

	std::vector<int> a(k + 1), b(k + 1);
	for (int i = 0;  i < k; i++) {
		int l, r;
		std::cin >> l >> r;

		a[i] = l;
		b[i] = r;
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int x = 0;
	int y = 0;
	for (int i = 0; i < k; i++) {
		if (a[i] != a[i + 1]) {
			x++;
		}
		if (b[i] != b[i + 1]) {
			y++;
		}
	}

	std::cout << x * n + y * n - x * y;
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
