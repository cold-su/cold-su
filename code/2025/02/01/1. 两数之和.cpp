class Solution {
  public:
	vector<int> twoSum(vector<int>& nums, int t) {
		std::map<int, int> map;
		for (int i = 0; i < nums.size(); i++) {
			if (map.count(t - nums[i])) {
				return {map[t - nums[i]], i};
			}
			map[nums[i]] = i;
		}
		return {};
	}
};