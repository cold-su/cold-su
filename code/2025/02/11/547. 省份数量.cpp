class Solution {
  public:
	int findCircleNum(vector<vector<int>>& g) {
		std::set<int> vis;
		int n = g.size();
		auto dfs = [&](this auto && dfs, int p) {
			if (vis.count(p)) {
				return;
			}
			vis.insert(p);
			for (int i = 0; i < n; i++) {
				if (g[p][i] == 1) {
					dfs(i);
				}
			}
		};
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (vis.count(i) == 0) {
				ans++;
				dfs(i);
			}
		}
		return ans;
	}
};

class Solution {
  public:
	int findCircleNum(vector<vector<int>>& g) {
		std::set<int> vis;
		int n = g.size();
		auto dfs = [&](this auto && dfs, int i, int j) {
			if (vis.count(j) || g[i][j] == 0) {
				return;
			}
			vis.insert(j);
			for (i = 0; i < n; i++) {
				dfs(j, i);
			}
		};
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (g[i][j] == 1 and vis.count(i) == 0 and vis.count(j) == 0) {
					ans++;
					dfs(i, j);
				}
			}
		}
		return ans;
	}
};

class Solution {
  public:
	int findCircleNum(vector<vector<int>>& g) {
		using v = std::pair<int, int>;
		std::set<v> vis;
		int n = g.size(), ans = 0;
		auto dfs = [&](this auto && dfs, int i, int j) {
			v t = {i, j}, T = {j, i};
			if (vis.count(t) || vis.count(T) || g[i][j] == 0) {
				return;
			}
			vis.insert(t);
			vis.insert(T);
			for (int k = 0; k < n; k++) {
				dfs(j, k);
			}
		};
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				v t = {i, j}, T = {j, i};
				if (vis.count(t) == 0 and vis.count(T) == 0 and g[i][j] == 1) {
					ans++;
					dfs(i, j);
				}
			}
		}
		return ans;
	}
};