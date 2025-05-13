class Solution
{
public:
	using i64 = long long;
	i64 subtreeInversionSum(std::vector<std::vector<int>>& edges, std::vector<int>& nums, int k) {
		// x, fa, cd, mul
		// dfs(x, fa, cd, mul) -> dfs(_x, x, k - 1, mul * -1) + mul * s       if cd == 0
		// dfs(x, fa, cd, mul) -> dfs(_x, x, cd - 1, mul) + mul * s           otherwise
		int n = nums.size();
		std::vector<std::vector<int>> g(n);
		for (auto e : edges) {
			int u = e[0], v = e[1];
			g[u].emplace_back(v);
			g[v].emplace_back(u);
		}
		std::vector vis(n, std::vector<std::array<i64, 2>>(k, {LLONG_MIN, LLONG_MIN}));
		auto dfs = [&](auto& self, int x, int fa, int cd, int f) -> i64 {
			auto& res = vis[x][cd][f];
			if (res != LLONG_MIN) { // memo
				return res;
			}

			// not to pick
			i64 p1 = f ? -nums[x] : nums[x];
			for (auto y : g[x]) {
				if (y != fa) {
					p1 += self(self, y, x, std::max(cd - 1, 0), f);
				}
			}

			// to pick
			i64 p2 = LLONG_MIN;
			if (cd == 0) {
				f = !f;
				p2 = f ? -nums[x] : nums[x];
				for (auto y : g[x]) {
					if (y != fa) {
						p2 += self(self, y, x, k - 1, f);
					}
				}
			}
			res = std::max(p1, p2);
			return res;
		};
		return dfs(dfs, 0, -1, 0, 0);
	}
};