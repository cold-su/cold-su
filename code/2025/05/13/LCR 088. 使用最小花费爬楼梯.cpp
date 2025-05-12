class Solution
{
public:
	int
	minCostClimbingStairs(std::vector<int>& cost)
	{
		// f[i] -> f[i + 1] + cost[i]     if climb 1 stair
		// f[i] -> f[i + 2] + cost[i]     otherwise
		int n = cost.size();
		std::vector<int> f(n + 2);
		for (int i = n; i--;) {
			f[i] = std::min(f[i + 1], f[i + 2]) + cost[i];
		}
		return std::min(f[0], f[1]);
	}
};