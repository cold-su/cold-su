#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int a, b;
	std::cin >> a >> b;

	int ans = 0;
	for (int i = a + 1; i < b; i++) {
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
			ans += i;
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
