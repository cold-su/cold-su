#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	std::string s;
	std::cin >> s;

	std::map<char, char> map;
	map['a'] = map['b'] = map['c'] = '0';
	for (int i = 0; i < s.size(); i += 5) {
		char k = s[i];
		char v = s[i + 3];

		if ('0' <= v && v <= '9') {
			map[k] = v;
		} else {
			map[k] = map[v];
		}
	}

	for (auto [k, v] : map) {
		std::cout << v << " ";
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
