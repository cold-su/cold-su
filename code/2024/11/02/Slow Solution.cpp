#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	int t, n, m;
	std::cin >> t >> n >> m;

	int sum = 0, idx = 0;
	for (int i = 1; i <= t && m >= n; i++) {
		idx = i;
		m -= n;
		sum += n * n; 
	}
	if (idx == t) {
		println("{}", sum);
	} else {
		println("{}", sum + m * m);
	}
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
