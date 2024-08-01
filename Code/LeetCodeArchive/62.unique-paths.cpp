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
    }
};
// @lc code=end

