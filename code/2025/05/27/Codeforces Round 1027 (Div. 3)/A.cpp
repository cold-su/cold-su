#include <bits/stdc++.h>

void solve() {
	std::string s;
	std::cin >> s;
	int n = std::stoi(s);
	// (a + b) ^ 2 = n
	// a = sqrt(n) - b
	for (int i = 0; i <= 2 * sqrt(n); i++) {
		for (int j = 0; j <= 2 * sqrt(n); j++) {
			if (pow(i + j, 2) == n) {
				std::cout << i << " " << j << "\n";
				return;
			}
		}
	}
	std::cout << -1 << "\n";
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
