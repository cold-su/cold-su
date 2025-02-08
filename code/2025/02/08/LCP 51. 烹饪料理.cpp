class Solution {
  public:
	int perfectMenu(vector<int>& m, vector<vector<int>>& c, vector<vector<int>>& a, int k) {
		int ans = -1;
		int n = c.size();
		std::vector<bool> vis(n, false);
		auto dfs = [&](this auto && dfs, int l, int r, int cnt) {
			if (cnt < 0) {
				return;
			}
			if (l >= k) {
				ans = std::max(ans, r);
			}
			auto can = [&](std::vector<int> nm, int idx) {
				for (int i = 0; i < c[idx].size(); i++) {
					nm[i] -= c[idx][i];
					if (nm[i] < 0) {
						return false;
					}
				}
				return true;
			};
			for (int i = 0; i < n; i++) {
				if (!vis[i] and can(m, i)) {
					vis[i] = true;
					for (int j = 0; j < c[i].size(); j++) {
						m[j] -= c[i][j];
					}
					dfs(l + a[i][1], r + a[i][0], cnt - 1);
					vis[i] = false;
					for (int j = 0; j < c[i].size(); j++) {
						m[j] += c[i][j];
					}
				}
			}
		};
		dfs(0, 0, c.size());
		return ans;
	}
};