class Solution {
public:
	int assignEdgeWeights(std::vector<std::vector<int>>& edges) {
		int n = edges.size();
		std::vector<std::vector<int>> g(n + 2);
		for (auto e : edges) {
			g[e[0]].emplace_back(e[1]);
			g[e[1]].emplace_back(e[0]);
		}
		auto dep = [&](this auto& self, int fa, int x) -> int {
			int c = 0;
			for (auto y : g[x]) {
				if (y != fa) {
					c = std::max(self(x, y) + 1, c);
				}
			}
			return c;
		};
		int m = dep(-1, 1);
		const int M = 1e9 + 7;
		std::vector<std::array<int, 2>> f(m + 1);
		for (int i = 1; i <= m; i++) {
			f[i][0] = (f[i - 1][0] + f[i - 1][1]) % M;
			f[i][1] = (f[i - 1][1] + f[i - 1][0] + 1) % M;
		}
		return f[m][1] % M;
	}
};