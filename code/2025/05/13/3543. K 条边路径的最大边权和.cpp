class Solution
{
public:
	int
	maxWeight(int n, std::vector<std::vector<int>>& edges, int k, int t)
	{
		std::vector g(n, std::vector<std::pair<int, int>> (0));
		for (auto& x : edges) {
			int u = x[0], v = x[1], w = x[2];
			g[u].emplace_back(v, w);
		}
		int ans = -1;
		std::set<std::tuple<int, int, int>> vis;
		auto dfs = [&](auto& self, int x, int i, int s) -> void {
			if (vis.find({x, i, s}) != vis.end()) {
				return;
			} else {
				vis.emplace(x, i, s);
			}
			if (i == k) {
				ans = std::max(ans, s);
				return;
			}
			for (auto [y, w] : g[x]) {
				if (s + w < t) {
					self(self, y, i + 1, s + w);
				}
			}
		};
		for (int i = 0; i < n; i++) {
			dfs(dfs, i, 0, 0);
		}
		return ans;
	}
};