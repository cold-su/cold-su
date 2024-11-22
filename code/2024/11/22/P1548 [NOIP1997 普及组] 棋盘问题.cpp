#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n, m;
	std::cin >> n >> m;

	int cnt = 0;
	int __cnt = 0;

	auto scan = [&] (int h, int w) {
		for (int i = 0; i <= n - h; i++) {
			for (int j = 0; j <= m - w; j++) {
				cnt += h == w;
				__cnt += h != w;
			}
		}
	};

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scan(i, j);
		}
	}

	deb("{} {}", cnt, __cnt);
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
