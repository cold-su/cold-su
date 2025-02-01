class Solution {
  public:
	vector<int> majorityElement(vector<int>& nums) {
		std::map<int, int> map;
		for (int x : nums) {
			map[x]++;
		}
		std::vector<int> ans;
		for (auto [k, v] : map) {
			if (v > nums.size() / 3) {
				ans.push_back(k);
			}
		}
		return ans;
	}
};