#include <bits/stdc++.h>

std::vector<std::vector<int>> generateMatrix(int n) {
	std::vector ans(n, std::vector<int> (n, 1));
	std::vector vis(n, std::vector<bool> (n));
	vis[0][0] = true;
	int p = 1;
	int i = 0, j = 0;
	while (true) {
		for (auto [a, b] : (std::pair<int, int>[]) { {0, 1}, {1, 0}, {0, -1}, { -1, 0}}) {
			while (true) {
				if (p == n * n) {
					return ans;
				}
				if (i + a < 0 || i + a >= n || j + b >= n || j + b < 0 || vis[i + a][j + b]) {
					break;
				}
				i += a, j += b;
				ans[i][j] = ++p;
				vis[i][j] = true;
			}
		}
	}
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	std::cin >> n;
	for (auto x : generateMatrix(n)) {
		for (int y : x) {
			std::cout << std::setw(3) << y;
		}
		std::cout << "\n";
	}

	return 0;
}
