class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int n = nums.size();
		std::vector<int> ans(n);
		auto a = partial_sum(nums);
		auto b = partial_sum(nums, false);
		for (int i = 0; i < n; i++) {
			ans[i] = a[i] * b[i + 1];
		}
		return ans;
	}

	std::vector<int> partial_sum(std::vector<int> nums, bool is = true) {
		int n = nums.size();
		std::vector<int> ans(n + 1, 1);
		if (!is) {
			std::reverse(nums.begin(), nums.end());
		}
		for (int i = 1; i <= n; i++) {
			ans[i] = ans[i - 1] * nums[i - 1];
		}
		if (!is) {
			std::reverse(ans.begin(), ans.end());
		}
		return ans;
	}
};