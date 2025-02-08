class Solution {
  public:
	int findNumbers(vector<int>& nums) {
		int f = 0;
		for (int &x : nums) {
			int c = 0;
			while (x) {
				x /= 10;
				c++;
			}
			f += c % 2 == 0;
		}
		return f;
	}
};