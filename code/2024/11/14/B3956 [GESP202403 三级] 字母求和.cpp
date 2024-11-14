#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::string s;
	std::cin >> n >> s;

	int sum = 0;
	for (char i : s) {
		if ('a' <= i && i <= 'z') {
			sum += i - 'a' + 1;
		} else {
			sum += -(int) i;
		}
	}
	std::cout << sum;
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
