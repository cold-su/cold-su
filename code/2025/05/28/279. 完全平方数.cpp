class Solution {
public:
	int numSquares(int n) {
		std::vector<int> memo(n + 1, INT_MAX);
		auto dfs = [&](this auto& self, int x) -> int {
			if (x == 0) {
				return 0;
			}
			auto& res = memo[x];
			if (res != INT_MAX) {
				return res;
			}
			for (int y = 1; y <= sqrt(x); y++) {
				if (x - y >= 0) {
					res = std::min(res, self(x - y * y) + 1);
				}
			}
			return res;
		};
		return dfs(n);
	}
};