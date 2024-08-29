/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        int index = 0;
        while (index++ < nums.size()) {
            int mid = (left + right) >> 1;
            if (nums[mid] > target) {
                right = mid;
            }
            if (nums[mid] < target) {
                left = mid;
            }
            if (nums[mid] == target) {
                return mid;
            }
        }
        return -1;
    }
};
// @lc code=end
