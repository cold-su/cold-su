class Solution {
  public:
	bool canAliceWin(vector<int>& nums) {
		int f[2] {};
		for (int &x : nums) {
			f[x > 9] += x;
		}
		return f[0] != f[1];
	}
};