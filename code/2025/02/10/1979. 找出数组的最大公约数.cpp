class Solution {
  public:
	int findGCD(vector<int>& nums) {
		return std::gcd(std::ranges::max(nums), std::ranges::min(nums));
	}
};