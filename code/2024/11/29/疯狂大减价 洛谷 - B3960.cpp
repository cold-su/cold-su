#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;

	auto a = [] (int& n) {
		if (n >= 100) {
			n -= 20;
		}
	};

	auto b = [] (int& n) {
		if (n >= 200) {
			n -= 50;
		}
	};

	std::cout << std::min([&] (int n) {
		a(n);
		b(n);
		return n;
	} (n), [&] (int n) {
		b(n);
		a(n);
		return n;
	} (n));
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
