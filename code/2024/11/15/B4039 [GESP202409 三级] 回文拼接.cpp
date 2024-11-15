#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	std::string s;
	std::cin >> s;

	if (s.size() < 4) {
		std::cout << "No\n";
		return;
	}

	bool is = false;
	for (int i = 2; i <= s.size() - 2; i++) {
		auto l = s.substr(0, i);
		auto r = s.substr(i);

		// deb("{} r->{}", l, r);

		auto __l = l;
		std::reverse(l.begin(), l.end());
		auto __r = r;
		std::reverse(r.begin(), r.end());
		if (__l == l && __r == r) {
			is = true;
		}
	}

	std::cout << (is ? "Yes" : "No") << "\n";
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
