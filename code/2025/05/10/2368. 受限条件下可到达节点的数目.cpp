class Solution {
public:
	int 
	reachableNodes(int n, std::vector<std::vector<int>>& edges, std::vector<int>& restricted) {
		std::vector<std::vector<int>> g(n);
		for (auto& v : edges) {
			g[v[0]].emplace_back(v[1]);
			g[v[1]].emplace_back(v[0]);
		}
		std::set<int> seen(restricted.begin(), restricted.end());
		int ans = 0;
		auto dfs = [&](this auto& dfs, int x) -> void {
			if (seen.count(x)) {
				return;
			}
			ans++;
			seen.insert(x);
			for (auto _x : g[x]) {
				dfs(_x);
			}
		};
		dfs(0);
		return ans;
	}
};