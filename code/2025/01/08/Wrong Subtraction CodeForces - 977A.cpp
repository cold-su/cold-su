#include <bits/stdc++.h>

const bool MULTI = false;
using namespace std;
#define int long long int

void solve() {
	int n, k;
	cin >> n >> k;
	while (k--) {
		if (n % 10 == 0) {
			n /= 10;
		} else {
			n--;
		}
	}
	cout << n;
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
