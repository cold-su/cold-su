#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int q;
	std::cin >> q;

	std::map<std::string, int> map;
	while (q--) {
		int n;
		std::cin >> n;

		if (n == 1) {
			std::string s;
			int a;
			std::cin >> s >> a;

			map[s] += a;
		} else if (n == 2) {
			std::string s;
			std::cin >> s;
			auto find = map.find(s);
			if (find != map.end()) {
				map.erase(find);
			} else {
				continue;
			}
		} else {
			std::string s;
			std::cin >> s;
			auto find = map.find(s);
			if (find == map.end()) {
				std::cout << "0\n";
			} else {
				std::cout << map[s] << "\n";
			}
		}
	}
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
