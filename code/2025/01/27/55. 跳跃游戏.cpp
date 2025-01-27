// 动态规划 O(n^2)
class Solution {
  public:
	bool canJump(vector<int>& nums) {
		int n = nums.size();
		std::vector<bool> f(n, false);
		f[0] = true;
		for (int i = 0; i < n; i++) {
			for (int j = 1; i + j <= std::min(n - 1, i + nums[i]); j++) {
				f[i + j] = f[i];
			}
		}
		return f.back();
	}
};

// 扩展右边界 O(n)
class Solution {
  public:
	bool canJump(vector<int>& nums) {
		int n = nums.size();
		int m = 0;
		for (int i = 0; i < n; i++) {
			if (i <= m) {
				m = std::max(m, i + nums[i]);
			}
		}
		return m >= n - 1;
	}
};