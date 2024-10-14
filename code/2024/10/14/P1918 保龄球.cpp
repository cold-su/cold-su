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

	int idx = 0;
	std::map<int, int> map;
	while (n--) {
		int a;
		std::cin >> a;

		map[a] = ++idx;
	}

	int m;
	std::cin >> m;
	while (m--) {
		int a;
		std::cin >> a;
		std::cout << map[a] << "\n";
	}
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--) { solve(); }
	} else solve();
	return 0;
}
