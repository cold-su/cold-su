#include <bits/stdc++.h>

void
solve()
{
	int T, m;
	std::cin >> T >> m;
	std::vector<int> t(m), w(m);
	for (int i = 0; i < m; i++) {
		std::cin >> t[i] >> w[i];
	}
	// f[i][x] == maximum value chosen from a[0], a[1], ..., a[i] with maximum time x
	// f[i][x] -> f[i + 1][x + t[i]] + w[i]     if picked and x + t[i] <= T
	// f[i][x] -> f[i + 1][x]                   otherwise
	std::vector f(m + 1, std::vector<int>(T + 1));
	for (int i = m; i--;) {
		for (int x = T; x--;) {
			f[i][x] = f[i + 1][x];
			if (x + t[i] <= T) {
				f[i][x] = std::max(f[i][x], f[i + 1][x + t[i]] + w[i]);
			}
		}
	}
	// space optimized
	/*std::vector<int> f(T + 1);
	for (int i = m; i--;) {
		std::vector<int> nf(T + 1);
		for (int x = T; x--;) {
			nf[x] = f[x];
			if (x + t[i] <= T) {
				nf[x] = std::max(nf[x], f[x + t[i]] + w[i]);
			}
		}
		f = nf;
	}*/
	std::cout << f[0][0];
	// std::cout << f[0];
}

int
main(void)
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
