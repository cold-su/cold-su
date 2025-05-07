class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int n = nums.size();
		std::vector<int> a(n, 1);
		int f[2] {1, 1};
		for (int i = 0; i < n; i++) {
			a[i] *= f[0];
			f[0] *= nums[i];
		}
		for (int i = n; i--;) {
			a[i] *= f[1];
			f[1] *= nums[i];
		}
		return a;
	}
};