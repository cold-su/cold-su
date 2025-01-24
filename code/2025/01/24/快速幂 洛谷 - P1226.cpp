#include <bits/stdc++.h>
const bool MULTI = false;
#define int long long int

void solve() {
	int a, b, p;
	std::cin >> a >> b >> p;
	auto ans = [] (int a, int n, int mod) {
		int res = 1;
		while (n > 0) {
			if (n & 1) {
				res = res * a % mod;
			}
			a = a * a % mod;
			n >>= 1;
		}
		return res;
	};
	std::cout << std::format("{}^{} mod {}={}", a, b, p, ans(a, b, p));
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (MULTI) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
