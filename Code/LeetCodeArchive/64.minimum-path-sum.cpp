/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

class Solution {
   public:
    int minPathSum(vector<vector<int>>& grid) {
        for (auto p : grid) {
            for (auto a : p) {
                std::cout << a << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n";

        //
        int m = grid.size();
        int n = grid[0].size();
        vector<int> pre(m, grid[0][0]);
        vector<int> cur(m, 0);
        for (int i = 1; i < m; i++)
            pre[i] = pre[i - 1] + grid[i][0];
        for (int j = 1; j < n; j++) {
            cur[0] = pre[0] + grid[0][j];
            for (int i = 1; i < m; i++)
                cur[i] = min(cur[i - 1], pre[i]) + grid[i][j];
            swap(pre, cur);
        }
        // FIXME WA
        for (auto p : dp) {
            for (auto a : p) {
                std::cout << a << " ";
            }
            std::cout << "\n";
        }
        return 0;
    }
};
// @lc code=end
/*

@lc testcase=start
[[1,3,1],[1,5,1],[4,2,1]]
@lc testcase=end

* */
