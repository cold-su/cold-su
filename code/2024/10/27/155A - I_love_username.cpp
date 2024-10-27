#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;

	int max = INT_MIN, min = INT_MAX;
	int cnt = 0;
	while (n--) {
		int a;
		std::cin >> a;

		cnt += a > max || a < min;
		max = std::max(a, max);
		min = std::min(a, min);
	}

	std::cout << cnt - 1;
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--) { solve(); }
	} else solve();
	return 0;
}
