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
	int a, b;
	char c;
	std::cin >> a >> b >> c;

	if (c == '+') {
		std::cout << a + b;
	} else if (c == '*') {
		std::cout << a * b;
	} else if (c == '/') {
		if (b == 0) {
			std::cout << "Divided by zero!";
			return;
		}
		std::cout << a / b;
	} else if (c == '-') {
		std::cout << a - b;
	} else {
		std::cout << "Invalid operator!";
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