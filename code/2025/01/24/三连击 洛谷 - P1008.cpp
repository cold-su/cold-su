#include <bits/stdc++.h>
const bool MULTI = false;

void solve() {
	int f[9] {};
	for (int i = 1; i <= 9; i++) {
		f[i - 1] = i;
	}
	do {
		int x = f[0] * 100 + f[1] * 10 + f[2];
		int y = f[3] * 100 + f[4] * 10 + f[5];
		int z = f[6] * 100 + f[7] * 10 + f[8];
		int k = std::lcm(std::lcm(1, 2), 3);
		if (x * k == y * k / 2 and y * k / 2 == z * k / 3) {
			std::cout << x << " " << y << " " << z << "\n";
		}
	} while (std::next_permutation(f, f + 9));
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
