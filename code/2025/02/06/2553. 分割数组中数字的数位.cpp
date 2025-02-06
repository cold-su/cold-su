class Solution {
  public:
	vector<int> separateDigits(vector<int>& nums) {
		std::vector<int> ans;
		for (size_t i = nums.size(); i--;) {
			int x = nums[i];
			while (x) {
				ans.push_back(x % 10);
				x /= 10;
			}
		}
		std::reverse(ans.begin(), ans.end());
		return ans;
	}
};