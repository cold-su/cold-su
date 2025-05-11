class Solution
{
public:
	using i64 = long long;

	i64
	mostPoints(std::vector<std::vector<int>>& q)
	{
		// maximize the score in total
		// we can choose to pick or not to pick the problem
		// then if picked, skip the next k problems
		// get 0 point and move on otherwise

		// f[n] -> f[n + k] + scores of n      if the n-th problem is picked
		// f[n] -> f[n + 1] + 0                other wise
		int n = q.size();
		std::vector<i64> f(n + 1);
		for (int i = n; i--;) {
			int p = q[i][0], k = q[i][1] + 1;
			if (i + k < n) {
				f[i] += f[i + k];
			}
			f[i] = std::max(f[i] + p, f[i + 1]);
		}
		return f[0];
	}
};