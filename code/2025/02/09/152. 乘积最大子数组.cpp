class Solution {
  public:
	int maxProduct(vector<int>& nums) {
		int n = nums.size();
		std::vector<int> a(n, nums[0]), b(n, nums[0]);
		for (int i = 1; i < n; i++) {
			a[i] = std::max({a[i - 1] * nums[i], b[i - 1] * nums[i], nums[i]});
			b[i] = std::min({a[i - 1] * nums[i], b[i - 1] * nums[i], nums[i]});
		}
		return std::ranges::max(a);
	}
};