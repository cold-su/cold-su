#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> f {0};
	for (int i = 1; i <= n; i++) {
		f.emplace_back(INT_MAX);

		for (int j : {1, 5, 11}) {
			if (i < j) {
				continue;
			}

			f[i] = std::min(f[i], 1 + f[i - j]);
		}
	}

	std::cout << f[n];
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
