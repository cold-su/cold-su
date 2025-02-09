#include <ranges>
class Solution {
  public:
	int sumOddLengthSubarrays(vector<int>& a) {
		int ans = 0;
		for (int i = 1; i <= a.size(); i += 2) {
			for (auto x : a | std::views::slide(i)) {
				ans += std::reduce(x.begin(), x.end());
			}
		}
		return ans;
	}
};