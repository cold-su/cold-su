#include <bits/stdc++.h>

const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::string s;
	getline(std::cin, s);
	getline(std::cin, s);

	int p;
	char a;
	std::cin >> p >> a;

	s[p - 1] = a;
	std::cout << s;
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
