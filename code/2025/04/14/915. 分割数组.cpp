class Solution {
public:
	int partitionDisjoint(vector<int>& nums) {
		std::vector<std::pair<int, int>> a = {{nums.front(), nums.front()}}, b = {{nums.back(), nums.back()}};
		int n = nums.size();
		for (int i = n - 1; --i;) {
			b.push_back({nums[i], std::min(nums[i], b.back().second)});
		}
		while (b.size() >= 2) {
			auto [x, min] = b.back();
			b.pop_back();
			if (a.back().second <= min) {
				break;
			}
			a.push_back({x, std::max(a.back().second, x)});
		}
		return a.size();
	}
};