#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

std::map<int, int> map;

int f(int k) {
	if (k == 0) {
		return 1;
	}

	if (map[k] != 0) {
		return map[k];
	}

	return map[k] = f(floor(k / 2)) + f(floor(k / 3));
}

void solve() {
	int n;
	std::cin >> n;

	std::cout << f(n);
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
