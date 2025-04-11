class Solution {
public:
	int firstMissingPositive(vector<int>& nums) {
		std::set<int> s(nums.begin(), nums.end());
		int n = nums.size();
		for (int i = 1; i <= n; i++) {
			if (not s.count(i)) {
				return i;
			}
		}
		return n + 1;
	}
};