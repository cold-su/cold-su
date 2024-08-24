/*
 * @lc app=leetcode id=840 lang=cpp
 *
 * [840] Magic Squares In Grid
 */

// @lc code=start
class Solution {
   public:
    int ans = 0;
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if (grid[0].size() < 2) {
            return 0;
        }
        vector<vector<int>> dp(grid[0].size(), vector<int>(grid[0].size(), 0));
        int range = (grid[0].size() - 3) * (grid.size() - 3) + 1;
        // std::cout << range;
        for (int i = 0; i < range; i++) {
            int start = i % grid[0].size();
            check(start, grid);
            // std::cout << "\n\n";
        }
        return ans;
    }
    void check(int start, vector<vector<int>> target) {
        vector<vector<int>> checker(2, vector<int>(6, 0));
        int index = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                checker[start + i][start + j];
            }
        }
        map<int, int> mp;
        for (auto a : checker) {
            for (auto prev : a) {
                std::cout << prev << " ";
            }
            // mp[prev]++;
        }
        if (mp[checker[0] == 6]) {
            ans++;
        }
    }
};
// @lc code=end
