class Solution {
  public:
	int maximumSum(vector<int>& nums) {
		auto p = [] (int x) {
			int res = 0;
			while (x) {
				res += x % 10;
				x /= 10;
			}
			return res;
		};
		std::map<int, int> map;
		int n = nums.size();
		int ans = -1;
		for (int i = 0; i < n; i++) {
			int x = p(nums[i]);
			if (map.count(x)) {
				ans = std::max(ans, nums[i] + map[x]);
			}
			map[x] = std::max(map[x], nums[i]);
		}
		return ans;
	}
};