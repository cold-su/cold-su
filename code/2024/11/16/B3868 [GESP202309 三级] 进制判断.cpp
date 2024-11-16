#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	std::string s;
	std::cin >> s;

	std::vector<int> a = {1, 1, 1, 1};
	for (char i : s) {
		if (i > '1') {
			a[0] = 0;
		}
		if (i > '7') {
			a[1] = 0;
		}
		if (i > '9') {
			a[2] = 0;
		}
		if (i > 'F') {
			a[3] = 0;
		}
	}

	for (int i : a) {
		std::cout << i << " ";
	}
	std::cout << "\n";
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
