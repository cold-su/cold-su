/*
 * @lc app=leetcode id=1464 lang=cpp
 *
 * [1464] Maximum Product of Two Elements in an Array
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a= *max_element(nums.begin(), nums.end());
        nums.erase(find(nums.begin(), nums.end(), a));
        int b= *max_element(nums.begin(), nums.end());
        return (a-1)*(b-1);
    }
};
// @lc code=end

