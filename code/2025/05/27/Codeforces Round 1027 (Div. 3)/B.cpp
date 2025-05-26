#include <bits/stdc++.h>

void solve() {
	int n, k;
	std::cin >> n >> k;
	std::string s;
	std::cin >> s;
	int c0 = std::count(s.begin(), s.end(), '0');
	int c1 = std::count(s.begin(), s.end(), '1');
	for (int i = 0; i <= c0 / 2; i++) {
		for (int j = 0; j <= c1 / 2; j++) {
			if (i + j == k and c0 - 2 * i == c1 - 2 * j) {
				std::cout << "YES\n";
				return;
			}
		}
	}
	std::cout << "NO\n";
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int tt;
	std::cin >> tt;
	while (tt--) {
		solve();
	}
	return 0;
}
