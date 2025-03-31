class Solution {
public:
	int countBeautifulPairs(vector<int>& nums) {
		int ans = 0;
		auto make = [](int x) {
			while (x >= 10) {
				x /= 10;
			}
			return x;
		};
		for (int i = 0, n = nums.size(); i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (std::gcd(make(nums[i]), nums[j] % 10) == 1) {
					ans++;
				}
			}
		}
		return ans;
	}
};