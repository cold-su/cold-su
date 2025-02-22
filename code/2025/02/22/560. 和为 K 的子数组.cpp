class Solution {
public:
	int subarraySum(vector<int>& nums, int k) {
		int n = nums.size(), ans = 0;
		std::vector<int> p(n + 1);
		std::partial_sum(nums.begin(), nums.end(), p.begin() + 1);
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j < i; j++) {
				if (p[i] - p[j] == k) {
					ans++;
				}
			}
		}
		return ans;
	}
};