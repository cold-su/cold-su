#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int l, r;
	std::cin >> l >> r;
	auto is_prime = [] (int n) {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0)
				return false;
		}
		return n < 2 ? false : true;
	};
	for (; l <= r; l++) {
		if (!is_prime(l)) {
			continue;
		}

		auto temp = std::to_string(l);
		std::ranges::reverse(temp);

		if (is_prime(std::stoi(temp))) {
			std::cout << l << "\n";
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
