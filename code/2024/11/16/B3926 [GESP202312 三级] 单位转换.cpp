#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	std::string a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	int n = std::stoi(a);

	if (b == "km" && e == "m" || b == "m" && e == "mm") {
		deb("{} {} {} {} {}", n, b, c, n * 1000, e);
	}
	if (b == "km" && e == "mm") {
		deb("{} {} {} {} {}", n, b, c, n * 1000 * 1000, e);
	}
	if (b == "kg" && e == "g" || b == "g" && e == "mg") {
		deb("{} {} {} {} {}", n, b, c, n * 1000, e);
	}
	if (b == "kg" && e == "mg") {
		deb("{} {} {} {} {}", n, b, c, n * 1000 * 1000, e);
	}
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
