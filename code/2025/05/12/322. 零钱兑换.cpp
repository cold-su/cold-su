class Solution
{
public:
	int
	coinChange(std::vector<int>& c, int amount)
	{
		int n = c.size();
		std::vector<int> f(amount + 1, INT_MAX);
		f[amount] = 0;
		for (int t = amount; t--;) {
			for (int i = 0; i < n; i++) {
				if (c[i] == INT_MAX || t + c[i] > amount || f[t + c[i]] == INT_MAX) {
					continue;
				}
				f[t] = std::min(f[t], f[t + c[i]] + 1);
			}
		}
		return f[0] == INT_MAX ? -1 : f[0];
	}
};