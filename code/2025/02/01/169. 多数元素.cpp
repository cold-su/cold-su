class Solution {
  public:
	int majorityElement(vector<int>& nums) {
		std::map<int, int> map;
		for (int x : nums) {
			map[x]++;
		}
		for (auto [k, v] : map) {
			if (v > floor(nums.size() / 2)) {
				return k;
			}
		}
		return -1;
	}
};
/*
// 快速选择
class Solution {
  public:
	int majorityElement(vector<int>& nums) {
		int n = nums.size();
		std::nth_element(nums.begin(), nums.begin() + n / 2, nums.end());
		return nums[n / 2];
	}
};
 */