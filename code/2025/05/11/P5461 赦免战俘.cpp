#include <bits/stdc++.h>

int
main(void)
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n;
	std::cin >> n;
	n = 1 << n;
	std::vector g(n, std::vector<bool> (n, 1));
	auto dfs = [&](auto& dfs, int r0, int c0, int r1, int c1) -> void {
		if (r0 + 1 >= r1 || c0 + 1 >= c1) {
			return;
		}
		for (int i = r0; i < (r0 + r1 + 1) / 2; i++) {
			for (int j = c0; j < (c0 + c1 + 1) / 2; j++) {
				g[i][j] = 0;
			}
		}
		dfs(dfs, (r0 + r1 + 1) / 2, c0, r1, (c0 + c1 + 1) / 2); // bottom-left
		dfs(dfs, (r0 + r1 + 1) / 2, (c0 + c1 + 1) / 2, r1, c1); // bottom-right
		dfs(dfs, r0, (c0 + c1 + 1) / 2, (r0 + r1 + 1) / 2, c1); // top-right
	};
	dfs(dfs, 0, 0, n, n);
	for (auto& v : g) {
		for (int i = 0; i < n; i++) {
			std::cout << v[i] << " \n"[i == n - 1];
		}
	} 
	return 0;
}
