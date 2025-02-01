class Solution {
  public:
	void rotate(vector<int>& nums, int k) {
		int n = nums.size();
		int p = n - k % n;
		std::rotate(nums.begin(), nums.begin() + p, nums.end());
	}
};