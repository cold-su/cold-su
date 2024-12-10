#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = true;
#define int long long int

void solve() {
	std::string s, t;
	std::cin >> s >> t;

	std::map<char, int> map;
	for (auto c : s) {
		map[c]++;
	}

	for (int i = 0; i < t.size(); i++) {
		if (map.find(t[i]) != map.end()) {
			std::cout << "YES\n";
			return;
		}
	}

	std::cout << "NO\n";
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
