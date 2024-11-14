#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int x, y, z, n, m;
	std::cin >> x >> y >> z >> n >> m;

	int ans = 0;
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= m - i; j++) {
			// i x z + j y z + m - i - j <= z n

			ans += i * x * z + j * y * z + m - i - j == z * n;
		}
	}
	std::cout << ans;
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
