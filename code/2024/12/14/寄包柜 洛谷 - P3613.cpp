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

	std::vector nums(n, std::vector<int> {});

	int q;
	std::cin >> q;
	while (q--) {
		int p;
		std::cin >> p;

		if (p == 1) {
			int i, j;
			std::cin >> i >> j;
			i--;
			j--;

			if (j >= nums[i].size()) {
				nums[i].resize(j + 1);
			}

			int k;
			std::cin >> k;
			nums[i][j] = k;
		} else {
			int i, j;
			std::cin >> i >> j;

			i--;
			j--;

			std::cout << nums[i].at(j) << "\n";
		}
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
