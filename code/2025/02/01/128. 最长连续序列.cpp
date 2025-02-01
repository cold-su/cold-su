class Solution {
  public:
	int longestConsecutive(vector<int>& nums) {
		std::map<int, int> map;
		for (int x : nums) {
			map[x] = 1;
		}
		int ans = 0;
		for (auto &[k, v] : map) {
			v += map[k - 1];
			ans = std::max(ans, v);
		}
		return ans;
	}
};