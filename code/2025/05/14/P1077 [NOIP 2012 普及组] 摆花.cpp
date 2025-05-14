#include <bits/stdc++.h>

void
solve()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	// dfs(i, tot) -> dfs(i + 1, tot + k)
	std::map<std::pair<int, int>, int> vis;
	const int M = 1e6 + 7;
	auto dfs = [&](auto& dfs, int i, int tot) -> int {
		if (vis.find({i, tot}) != vis.end()) {
			return vis[{i, tot}];
		}
		if (tot > m) {
			return 0;
		}
		if (tot == m) {
			return 1;
		}
		if (i >= n) {
			return 0;
		}
		auto& res = vis[{i, tot}];
		for (int k = 0; k <= a[i]; k++) {
			res = (res + dfs(dfs, i + 1, tot + k)) % M;
		}
		return res;
	};
	std::cout << dfs(dfs, 0, 0) % M;
}

int
main(void)
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
