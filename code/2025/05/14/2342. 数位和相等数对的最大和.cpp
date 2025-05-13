class Solution
{
public:
	int
	maximumSum(std::vector<int>& nums)
	{
		std::map<int, int> map; // <digit sum, maximum number>
		int n = nums.size();
		auto sum = [](int x) {
			int res = 0;
			while (x) {
				res += x % 10;
				x /= 10;
			}
			return res;
		};
		int ans = -1;
		for (int i = 0; i < n; i++) {
			int p = sum(nums[i]);
			if (map.find(p) != map.end()) {
				ans = std::max(ans, map[p] + nums[i]);
			}
			map[p] = std::max(map[p], nums[i]);
		}
		return ans;
	}
};