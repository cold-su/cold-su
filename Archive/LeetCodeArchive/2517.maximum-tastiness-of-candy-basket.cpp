/*
 * @lc app=leetcode id=2517 lang=cpp
 *
 * [2517] Maximum Tastiness of Candy Basket
 *
 * https://leetcode.com/problems/maximum-tastiness-of-candy-basket/description/
 *
 * algorithms
 * Medium (64.00%)
 * Likes:    904
 * Dislikes: 145
 * Total Accepted:    22.2K
 * Total Submissions: 34.6K
 * Testcase Example:  [13,5,1,8,21,2]\n3
 *
 * You are given an array of positive integers price where price[i] denotes the
 * price of the i^th candy and a positive integer k.
 *
 * The store sells baskets of k distinct candies. The tastiness of a candy
 * basket is the smallest absolute difference of the prices of any two candies
 * in the basket.
 *
 * Return the maximum tastiness of a candy basket.
 *
 *
 * Example 1:
 *
 *
 * Input: price = [13,5,1,8,21,2], k = 3
 * Output: 8
 * Explanation: Choose the candies with the prices [13,5,21].
 * The tastiness of the candy basket is: min(|13 - 5|, |13 - 21|, |5 - 21|) =
 * min(8, 8, 16) = 8.
 * It can be proven that 8 is the maximum tastiness that can be achieved.
 *
 *
 * Example 2:
 *
 *
 * Input: price = [1,3,1], k = 2
 * Output: 2
 * Explanation: Choose the candies with the prices [1,3].
 * The tastiness of the candy basket is: min(|1 - 3|) = min(2) = 2.
 * It can be proven that 2 is the maximum tastiness that can be achieved.
 *
 *
 * Example 3:
 *
 *
 * Input: price = [7,7,7,7], k = 2
 * Output: 0
 * Explanation: Choosing any two distinct candies from the candies we have will
 * result in a tastiness of 0.
 *
 *
 *
 * Constraints:
 *
 *
 * 2 <= k <= price.length <= 10^5
 * 1 <= price[i] <= 10^9
 *
 *
 */

// @lc code=start
class Solution {
   public:
    int maximumTastiness(vector<int>& price, int k) {
        std::sort(price.begin(), price.end());
        auto func = [&](int index) {
            int counter = 1;
            int prev = price[0];
            for (int i : price) {
                if (i >= prev + index) {
                    counter++;
                    prev = i;
                }
            }
            return counter;
        };
        int left = 0;
        int right = (price.back() - price[0]) / (k - 1) + 1;
        while (left + 1 < right) {
            int mid = left + (right - left) / 2;
            (func(mid) >= k ? left : right) = mid;
        }
        return left;
    }
};
// @lc code=end
/*

@lc testcase=start
[13,5,1,8,21,2]
3
@lc testcase=end

* */
