class Solution {
public:
	int numOfMinutes(int n, int id, vector<int>& a, vector<int>& t) {
		std::map<int, std::vector<int>> r;
		for (int i = 0; i < a.size(); i++) {
			if (a[i] != -1) {
				r[a[i]].push_back(i);
			}
		}
		int ans = 0;
		auto dfs = [&](this auto & dfs, int x, int time) -> void {
			if (not r.count(x)) {
				return;
			}
			time += t[x];
			ans = std::max(ans, time);
			for (int _x : r[x]) {
				dfs(_x, time);
			}
		};
		dfs(id, 0);
		return ans;
	}
};