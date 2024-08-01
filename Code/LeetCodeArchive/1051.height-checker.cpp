/*
 * @lc app=leetcode id=1051 lang=cpp
 *
 * [1051] Height Checker
 */

// @lc code=start
class Solution {
   public:
    int heightChecker(vector<int>& heights) {
        bool wrapped = true;
        vector<int> checker = heights;
        while (wrapped) {
            wrapped = false;
            for (int i = 1; i < heights.size(); i++) {
                if (heights[i - 1] > heights[i]) {
                    std::swap(heights[i - 1], heights[i]);
                    wrapped = true;
                }
            }
        }
        // @note
        // for (auto prev : heights) {
        //     std::cout << prev;
        // }
        int counter = 0;
        for (int i = 0; i < checker.size(); i++) {
            if (checker[i] != heights[i]) {
                ++counter;
            }
        }
        return counter;
    }
};
// @lc code=end
