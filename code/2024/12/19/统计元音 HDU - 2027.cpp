#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int t;
	std::cin >> t;
	std::string _;
	getline(std::cin, _);
	for (int i = 0; i < t; i++) {
		std::map<char, int> map {
			{'a', 0},
			{'e', 0},
			{'i', 0},
			{'o', 0},
			{'u', 0}
		};

		std::string s;
		getline(std::cin, s);
		for (int j = 0; j < s.size(); j++) {
			for (auto& [k, v] : map) {
				if (k == s[j]) {
					v++;
				}
			}
		}

		for (auto [k, v] : map) {
			std::cout << k << ":" << v << "\n";
		}

		std::cout << (std::string []) {"", "\n"} [i != t - 1];
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
