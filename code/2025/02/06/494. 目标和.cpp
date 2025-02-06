class Solution {
  public:
	int findTargetSumWays(vector<int>& a, int t) {
		int ans = 0, n = a.size();
		int p = 0;
		auto dfs = [&](this auto && dfs, int i) {
			if (i == n) {
				ans += p == t;
				return;
			}
			p -= a[i];
			dfs(i + 1);
			p += a[i] * 2;
			dfs(i + 1);
			p -= a[i];
		};
		dfs(0);
		return ans;
	}
};