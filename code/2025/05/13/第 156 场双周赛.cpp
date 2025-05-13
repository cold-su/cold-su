class Solution {
public:
	int maxFreqSum(std::string s) {
		std::string t = "aeiou";
		std::vector<int> c(26 + 'a');
		for (auto ch : s) {
			c[ch]++;
		}
		int ans1 = 0, ans2 = 0;
		for (int i = 'a', n = c.size(); i < n; i++) {
			if (t.contains(char(i))) {
				ans1 = std::max(ans1, c[i]);
			} else {
				ans2 = std::max(ans2, c[i]);
			}
		}
		return ans1 + ans2;
	}

	int minOperations(std::vector<int>& nums) {
		int ans = 0;
		std::set<std::pair<int, int>> set;
		std::vector<std::pair<int, int>> s;
		int n = nums.size();
		for (int i = n; i--;) {
			while (s.size() and nums[i] <= s.back().first) {
				s.pop_back();
			}
			if (nums[i] != 0) {
				set.emplace(nums[i], s.size() ? s.back().second : -1);
			}
			s.emplace_back(nums[i], i);
		}
		return set.size();
	}

	int maxWeight(int n, std::vector<std::vector<int>>& edges, int k, int t) {
		std::vector<std::vector<std::pair<int, int>>> g(n);
		for (auto x : edges) {
			int u = x[0], v = x[1], w = x[2];
			g[u].emplace_back(v, w);
		}
		int ans = -1;
		std::set<std::tuple<int, int, int>> vis;
		auto dfs = [&](auto& self, int x, int p, int s) -> void {
			if (vis.find({x, p, s}) != vis.end()) {
				return;
			}
			if (p == k) {
				ans = std::max(ans, s);
				return;
			}
			vis.emplace(x, p, s);
			for (auto [_x, w] : g[x]) {
				if (s + w < t) {
					self(self, _x, p + 1, s + w);
				}
			}
		};
		for (int x = 0; x < n; x++) {
			dfs(dfs, x, 0, 0);
		}
		return ans;
	}

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
			// memorize
			if (res != LLONG_MIN) {
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