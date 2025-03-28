#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n, m;
		std::cin >> n >> m;
		std::vector g(n, std::vector<char> (m));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				char c;
				std::cin >> c;
				g[i][j] = c;
			}
		}
		auto make = [&](int r, int c) -> char {
			int ans = 0;
			for (int i = std::max(r - 1, 0); i <= std::min(r + 1, n - 1); i++) {
				for (int j = std::max(c - 1, 0); j <= std::min(c + 1, m - 1); j++) {
					ans += g[i][j] == '*';
				}
			}
			return g[r][c] == '*' ? '*' : ans + '0';
		};
		for (int i = 0; i < n; i++, std::cout << "\n") {
			for (int j = 0; j < m; j++) {
				std::cout << make(i, j);
			}
		}
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
