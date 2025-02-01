class Solution {
  public:
	int findKOr(vector<int>& nums, int k) {
		int f[32] {};
		for (int x : nums) {
			int i = 31;
			while (x) {
				f[i] += x % 2;
				x >>= 1;
				i--;
			}
		}
		std::string t = "";
		for (int x : f) {
			t += char((x >= k) + '0');
		}
		std::bitset<32> ans(t);
		return ans.to_ulong();
	}
};