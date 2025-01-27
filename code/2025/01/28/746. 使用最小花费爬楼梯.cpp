class Solution {
  public:
	int minCostClimbingStairs(vector<int>& a) {
		std::vector<int> f {a[0], a[1]};
		a.push_back(0);
		for (int i = 2; i < a.size(); i++) {
			int p = std::min(f[i - 1], f[i - 2]) + a[i];
			f.push_back(p);
		}
		return f.back();
	}
};