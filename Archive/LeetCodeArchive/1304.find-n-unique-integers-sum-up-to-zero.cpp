/*
 * @lc app=leetcode id=1304 lang=cpp
 *
 * [1304] Find N Unique Integers Sum up to Zero
 *
 * https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/description/
 *
 * algorithms
 * Easy (76.17%)
 * Likes:    1991
 * Dislikes: 598
 * Total Accepted:    224.3K
 * Total Submissions: 294.4K
 * Testcase Example:  5
 *
 * Given an integer n, return any array containing n unique integers such that
 * they add up to 0.
 *
 *
 * Example 1:
 *
 *
 * Input: n = 5
 * Output: [-7,-1,1,3,4]
 * Explanation: These arrays also are accepted [-5,-1,1,2,3] ,
 * [-3,-1,2,-2,4].
 *
 *
 * Example 2:
 *
 *
 * Input: n = 3
 * Output: [-1,0,1]
 *
 *
 * Example 3:
 *
 *
 * Input: n = 1
 * Output: [0]
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= n <= 1000
 *
 *
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
    vector<int> sumZero(int n) {
        vector<int> ans(n);
        for (int i = 0; i < n; ++i) {
            ans[i] = i * 2 - n + 1;
        }
        return ans;
    }
};
// @lc code=end
/*

@lc testcase=start
5
@lc testcase=end

* */
