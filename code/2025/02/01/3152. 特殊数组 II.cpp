class Solution {
  public:
	vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
		int n = nums.size();
		int i = 0, j = 1;
		std::vector<int> a;
		while (j < n) {
			a.push_back((nums[i] + nums[j]) & 1 ? 0 : 1);
			i++, j++;
		}
		std::vector<int> p(a.size() + 1);
		std::partial_sum(a.begin(), a.end(), p.begin() + 1);
		std::vector<bool> ans;
		for (auto vec : queries) {
			int l = vec[0], r = vec[1];
			ans.push_back((p[r] - p[l]) == 0);
		}
		return ans;
	}
};