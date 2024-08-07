/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
   public:
    int uniquePaths(int m, int n) {
        // 我的想法：
        // 从终点看，机器人必须要走到终点旁边的几个格子
        // 这时再把这些格子分别看作子终点
        // 子终点的左边的上边也会有孙终点
        // 一直回溯到起始点

        // 原来这样的想法是DP呀。
        vector<vector<int>> dp(m, vector<int>(n, 1));
        for (int i = 1; i < m; i++) {
            for (auto row : dp) {
                for (auto single : row) {
                    std::cout << single << " ";
                }
                std::cout << "\n";
            }
            std::cout << "\n\n";
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        return dp[m - 1][n - 1];
    }
};
// @lc code=end
