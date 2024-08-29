/*
 * @lc app=leetcode id=806 lang=cpp
 *
 * [806] Number of Lines To Write String
 */

// @lc code=start
class Solution {
   public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int counter = 0;
        int linear = 1;
        // int k=width[static_cast<int>(i)-97]
        for (auto i : s) {
            int k = widths[static_cast<int>(i) - 97];
            if (counter + k > 100) {
                linear++;
                counter = 0;
            }
            counter += k;
        }
        return {linear, counter};
    }
};
// @lc code=end
