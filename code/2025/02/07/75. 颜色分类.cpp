class Solution {
  public:
	void sortColors(vector<int>& nums) {
		int cnt[3] {};
		for (int x : nums) {
			cnt[x]++;
		}
		for (int i = 0, num = 0; int &x : cnt) {
			while (x) {
				nums[i] = num;
				i++, x--;
			}
			num += 1;
		}
	}
};