#include <bits/stdc++.h>
const bool MULTI = false;

int d[10001] {};

int f(int n) {
	int res = 1;
	for (int i = 1; i <= n / 2; i++) {
		res += d[i] != 0 ? d[i] : f(i);
	}
	return d[n] = res;
}

void solve() {
	int n;
	std::cin >> n;
	std::cout << f(n);
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
