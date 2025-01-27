class Solution {
  public:
	int combinationSum4(vector<int>& nums, int n) {
		std::vector<int> f {1};
		for (int i = 1; i <= n; i++) {
			unsigned tmp = 0;
			for (int j : nums) {
				if (i - j >= 0) {
					tmp += f[i - j];
				}
			}
			f.push_back(tmp);
		}
		return f.back();
	}
};