#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	std::string m;
	std::cin >> m;

	int n = m.size();
	if (std::to_string(std::stoi(m)).size() >= 4) {
		std::cout << std::stoi(m.substr(0, n - 3)) << " " << std::stoi(m.substr(n - 3));
	} else {
		std::cout << "0" << " " << std::stoi(m);
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
