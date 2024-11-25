#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int a, b, c;
	std::cin >> a >> b >> c;

	std::map<int, int> map;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++) {
				map[i + j + k]++;
			}
		}
	}

	int max = -1;
	for (auto [_, v] : map) {
		max = std::max(v, max);
	}

	for (auto [k, v] : map) {
		if (v == max) {
			std::cout << k;
			return;
		}
	}
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
