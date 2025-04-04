class Solution {
public:
	int totalNQueens(int n) {
		int ans = 0;
		std::set<int> x, d1, d2;
		auto dfs = [&](auto & self, int r) -> void {
			if (r == n) {
				ans++;
				return;
			}
			for (int c = 0; c < n; c++) {
				auto vis = [&]() {
					return x.count(c) or d1.count(c + r) or d2.count(c - r);
				};
				if (not vis()) {
					x.insert(c);
					d1.insert(c + r);
					d2.insert(c - r);
					self(self, r + 1);
					x.erase(c);
					d1.erase(c + r);
					d2.erase(c - r);
				}
			}
		};
		dfs(dfs, 0);
		return ans;
	}
};