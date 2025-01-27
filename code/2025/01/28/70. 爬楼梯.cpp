class Solution {
  public:
	int climbStairs(int n) {
		std::vector<int> f(std::max(2, n + 1));
		f[1] = 1;
		f[2] = 2;
		for (int i = 3; i <= n; i++) {
			for (int j : (int[]) {1, 2}) {
				f[i] += f[i - j];
			}
		}
		return f[n];
	}
};