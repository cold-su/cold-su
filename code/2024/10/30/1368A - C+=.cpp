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
	int a, b, n;
	std::cin >> a >> b >> n;

	if (a > b) {
		std::swap(a, b);
	}

	int cnt = 0;
	bool is = true;
	while (true) {
		if (is) {
			a += b;
		} else {
			b += a;
		}

		cnt++;
		is = !is;
		if (a > n || b > n) {
			break;
		}
	}

	std::cout << cnt << "\n";
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--) { solve(); }
	} else solve();
	return 0;
}
