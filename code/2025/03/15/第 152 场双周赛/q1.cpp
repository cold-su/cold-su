class Solution {
public:
	int totalNumbers(vector<int>& a) {
		int n = a.size();
		int p = 0;
		std::map<int, int> map;
		std::vector<bool> vis(n);
		auto dfs = [&](this auto & dfs, int i, int k) {
			if (k == 3) {
				if (p % 2 == 0 and p >= 100) {
					map[p]++;
				}
				return;
			}
			if (i == n) {
				return;
			}
			dfs(i + 1, k);
			for (int j = 0; j < n; j++) {
				if (not vis[j]) {
					p *= 10;
					p += a[j];
					vis[j] = true;
					dfs(i + 1, k + 1);
					vis[j] = false;
					p -= a[j];
					p /= 10;
				}
			}
		};
		dfs(0, 0);
		return map.size();
	}
};