class Solution {
public:
	int
	minOperations(std::vector<int>& nums)
	{
		std::vector<std::pair<int, int>> stk;
		std::set<std::pair<int, int>> set;
		int n = nums.size();
		for (int i = n; i--;) {
			while (stk.size() and stk.back().first >= nums[i]) {
				stk.pop_back();
			}
			if (nums[i] != 0) {
				set.emplace(nums[i], stk.size() ? stk.back().second : -1);
			}
			stk.emplace_back(nums[i], i);
		}
		return set.size();
	}
};