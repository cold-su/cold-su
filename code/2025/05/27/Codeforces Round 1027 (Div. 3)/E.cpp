#include <bits/stdc++.h>

void solve() {
	int n;
	std::cin >> n;
	using i64 = long long;
	std::vector<i64> a(n + 1);
	for (int i = 1; i <= n; i++) {
		std::cin >> a[i];
	}
	std::vector<std::vector<i64>> g(n + 1);
	for (int i = 1; i <= n - 1; i++) {
		i64 e1, e2;
		std::cin >> e1 >> e2;
		g[e1].emplace_back(e2);
		g[e2].emplace_back(e1);
	}
	auto dfs = [&](auto self, int fa, int x, i64 _max, i64 _min) -> void {
		i64 max = std::max(a[x], a[x] - _min);
		i64 min = std::min(a[x], a[x] - _max);
		a[x] = std::max(a[x], max);
		for (int y : g[x]) {
			if (y != fa) {
				self(self, x, y, max, min);
			}
		}
	};
	dfs(dfs, -1, 1, 0, 0);
	for (int i = 1; i <= n; i++) {
		std::cout << a[i] << " \n"[i == n];
	}
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
