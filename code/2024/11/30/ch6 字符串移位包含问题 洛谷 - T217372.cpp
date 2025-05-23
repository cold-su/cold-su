#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	std::string s, t;
	std::cin >> s >> t;

	if (s.size() < t.size()) {
		std::swap(s, t);
	}

	auto temp = s;

	do {
		s = std::format("{}{}", s.substr(1), s[0]);
		if (s.find(t) != std::string::npos) {
			std::cout << "true";
			return;
		}
	} while (s != temp);

	std::cout << "false";
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
