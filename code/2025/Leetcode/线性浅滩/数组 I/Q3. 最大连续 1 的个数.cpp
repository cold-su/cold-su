class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = nums[0];
        for (int i = 1, n = nums.size(); i < n; i++) {
            if (nums[i - 1] >= 1 and nums[i] >= 1) {
                nums[i] += nums[i - 1];
            }
            m = max(m, nums[i]);
            // std::cout << nums[i] << " ";
        }
        return m;
    }
};