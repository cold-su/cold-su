#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n, m;
	std::cin >> n >> m;
	std::vector<int> f(n);
	while (m--) {
		std::string s;
		std::cin >> s;
		if (s[0] == 'w') {
			int l, r;
			std::cin >> l >> r;
			l--;
			for (; l < r; l++) {
				f[l]++;
			}
		} else {
			int l, r, k;
			std::cin >> l >> r >> k;
			l--;
			int ans = 0;
			for (; l < r; l++) {
				if (f[l] >= k) {
					ans++;
					f[l] = 0;
				}
			}
			std::cout << ans << "\n";
		}
	}
	return 0;
}
