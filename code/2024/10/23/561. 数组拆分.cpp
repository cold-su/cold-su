class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        std::sort(nums.rbegin(), nums.rend());

        int ans = 0;
        for (int i = 0; i + 1 < nums.size(); i += 2) {
        	ans += std::min(nums[i], nums[i + 1]);
        }

        return ans;
    }
};