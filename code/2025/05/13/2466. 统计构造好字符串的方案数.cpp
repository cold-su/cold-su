class Solution
{
public:
	int
	countGoodStrings(int lo, int hi, int zero, int one)
	{
		int ans = 0;
		std::vector<int> vis(hi + 1, -1);
		auto dfs = [&](auto& self, int n) -> int {
			if (n < 0) {
				return 0;
			}
			if (n == 0) {
				return 1;
			}
			if (vis[n] != -1) {
				return vis[n];
			}
			return vis[n] = (self(self, n - zero) + self(self, n - one)) % MOD;
		};
		for (int i = lo; i <= hi; i++) {
			ans = (ans + dfs(dfs, i)) % MOD;
		}
		return ans;
	}
private:
	const int MOD = 1e9 + 7;	
};