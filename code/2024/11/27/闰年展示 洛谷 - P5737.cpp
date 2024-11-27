#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int x, y;
	std::cin >> x >> y;

	std::vector<int> ans;

	auto is = [] (int n) {
		if (n <= 1582) {
			return 0;
		}
		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
			return 1;
		}
		return 0;
	};

	for (; x <= y; x++) {
		if (is(x)) {
			ans.push_back(x);
		}
	}

	int n = ans.size();
	std::cout << n << "\n";
	for (int i : ans) {
		std::cout << i << " \n"[i == n - 1];
	}
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
