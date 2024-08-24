/*
 * @lc app=leetcode id=2319 lang=cpp
 *
 * [2319] Check if Matrix Is X-Matrix
 */

// @lc code=start
class Solution {
   public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                if (i - j == 0 || i + j == grid.size() - 1) {
                    if (grid[i][j] == 0) {
                        return false;
                    }
                    continue;
                }
                if (grid[i][j] != 0) {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end
