class Solution {
  public:
	int maxOperations(vector<int>& nums, int k) {
		std::map<int, int> map;
		int ans = 0;
		for (int i = 0; i < nums.size(); i++) {
			int &p = map[k - nums[i]];
			if (p > 0) {
				ans++;
				p--;
				continue;
			}
			map[nums[i]]++;
		}
		return ans;
	}
};