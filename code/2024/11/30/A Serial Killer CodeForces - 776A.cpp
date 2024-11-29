#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	std::string s, t;
	std::cin >> s >> t;

	std::vector<std::string> temp = {s, t};

	std::cout << std::format("{} {}", s, t) << "\n";

	int n = temp.size();

	int q;
	std::cin >> q;
	while (q--) {
		std::cin >> s >> t;

		for (int i = 0; i < n; i++) {
			if (temp[i] == s) {
				temp[i] = t;
			}
			std::cout << temp[i] << " \n"[i == n - 1];
		}
	}
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
