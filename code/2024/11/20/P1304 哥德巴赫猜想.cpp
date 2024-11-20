#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

bool is_prime(int num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0)
			return false;
	}
	return num < 2 ? false : true;
}


void solve() {
	int n;
	std::cin >> n;

	for (int i = 4; i <= n; i += 2) {
		for (int j = 2; j <= n / 2; j++) {
			if (is_prime(j) && is_prime(i - j)) {
				deb("{}={}+{}", i, j, i - j);
				break;
			}
		}
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
