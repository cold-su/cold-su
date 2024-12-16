#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

std::string f() {
	char a;
	std::string res;
	while (std::cin >> a and a != 0) {
		if (a == '[') {
			int k;
			std::cin >> k;
			std::string x = f();
			while (k--) {
				res += x;
			}
		} else if (a == ']') {
			return res;
		} else {
			res += a;
		}
	}

	return res;
}

void solve() {
	std::cout << f();
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
