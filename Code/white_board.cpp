class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; i++) {
            int min = *std::min_element(nums.begin(), nums.end());
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == min) {
                    nums[j] *= multiplier;
                    break;
                }
            }
        }
        return nums;
    }
};