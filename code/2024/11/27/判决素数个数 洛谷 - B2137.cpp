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
	int x, y;
	std::cin >> x >> y;

	if (x > y) {
		std::swap(x, y);
	}

	int cnt = 0;

	for (int i = x; i <= y; i++) {
		cnt += is_prime(i);
	}
	std::cout << cnt;
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
