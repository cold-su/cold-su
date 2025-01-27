class Solution {
  public:
	int jump(vector<int>& nums) {
		int n = nums.size();
		std::vector<int> f(n, INT_MAX);
		f[0] = 0;
		for (int i = 0; i < n; i++) {
			int p = nums[i];
			for (int j = 0; i + j <= std::min(n - 1, i + p); j++) {
				f[i + j] = std::min(f[i + j], f[i] + 1);
			}
		}
		return f[n - 1];
	}
};