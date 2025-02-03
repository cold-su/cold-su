class Solution {
  public:
	vector<int> sortArrayByParityII(vector<int>& nums) {
		int n = nums.size();
		std::vector<int> a, b;
		for (int i = 0; i < n; i++) {
			if (nums[i] & 1) {
				a.push_back(nums[i]);
			} else {
				b.push_back(nums[i]);
			}
		}
		std::vector<int> ans;
		for (int p = 0, i = 0, j = 0; p < n; p++) {
			if (p & 1) {
				ans.push_back(a[i]);
				i++;
			} else {
				ans.push_back(b[j]);
				j++;
			}
		}
		return ans;
	}
};