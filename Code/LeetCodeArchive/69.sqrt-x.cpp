/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 *
 * https://leetcode.com/problems/sqrtx/description/
 *
 * algorithms
 * Easy (39.20%)
 * Likes:    8234
 * Dislikes: 4516
 * Total Accepted:    2.1M
 * Total Submissions: 5.4M
 * Testcase Example:  4
 *
 * Given a non-negative integer x, return the square root of x rounded down to
 * the nearest integer. The returned integer should be non-negative as well.
 *
 * You must not use any built-in exponent function or operator.
 *
 *
 * For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 *
 *
 *
 * Example 1:
 *
 *
 * Input: x = 4
 * Output: 2
 * Explanation: The square root of 4 is 2, so we return 2.
 *
 *
 * Example 2:
 *
 *
 * Input: x = 8
 * Output: 2
 * Explanation: The square root of 8 is 2.82842..., and since we round it down
 * to the nearest integer, 2 is returned.
 *
 *
 *
 * Constraints:
 *
 *
 * 0 <= x <= 2^31 - 1
 *
 *
 */

#include <bits/stdc++.h>
using namespace std;
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

// @lc code=start
class Solution {  // TODO
   public:
    int mySqrt(int x) {
        int ans = this->search(0, x, [&](int64_t a) {
            return a * a <= x;
        });
        return ans;
    }
    /**
     * @brief 上界二分搜索
     *
     * @param left
     * @param right
     * @param match
     * @return int
     */
    int search(int left, int right, std::function<bool(int)> match) {
        while (left <= right) {
            int mid = left + ((right - left) >> 1);
            if (match(mid)) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left - 1;
    }
};
// @lc code=end
/*

@lc testcase=start
4
@lc testcase=end

* */
