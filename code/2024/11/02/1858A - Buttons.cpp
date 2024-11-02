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
	int a, b, c;
	std::cin >> a >> b >> c;

	bool is = !(c % 2);

	a -= is;
	b -= !is;

	if (a == b) {
		println("{}", is ? "First" : "Second");
	} else {
		println("{}", a > b ? "First" : "Second");
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
