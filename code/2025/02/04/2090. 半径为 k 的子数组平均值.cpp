class Solution {
  public:
	vector<int> getAverages(vector<int>& nums, int k) {
		int n = nums.size();
		std::vector<int> ans;
		uint64_t p = 0;
		for (int i = 0; i < std::min(n, k); i++) {
			p += nums[i];
		}
		for (int i = 0; i < n; i++) {
			if (i + k < n) {
				p += nums[i + k];
			}
			if (i < k || i > n - k - 1) {
				ans.push_back(-1);
			} else {
				ans.push_back(p / (k * 2 + 1));
				p -= nums[i - k];
			}
		}
		return ans;
	}
};