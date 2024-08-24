/*
 * @lc app=leetcode id=860 lang=cpp
 *
 * [860] Lemonade Change
 *
 * https://leetcode.com/problems/lemonade-change/description/
 *
 * algorithms
 * Easy (54.32%)
 * Likes:    2429
 * Dislikes: 168
 * Total Accepted:    219.6K
 * Total Submissions: 404.9K
 * Testcase Example:  [5,5,5,10,20]
 *
 * At a lemonade stand, each lemonade costs $5. Customers are standing in a
 * queue to buy from you and order one at a time (in the order specified by
 * bills). Each customer will only buy one lemonade and pay with either a $5,
 * $10, or $20 bill. You must provide the correct change to each customer so
 * that the net transaction is that the customer pays $5.
 *
 * Note that you do not have any change in hand at first.
 *
 * Given an integer array bills where bills[i] is the bill the i^th customer
 * pays, return true if you can provide every customer with the correct change,
 * or false otherwise.
 *
 *
 * Example 1:
 *
 *
 * Input: bills = [5,5,5,10,20]
 * Output: true
 * Explanation:
 * From the first 3 customers, we collect three $5 bills in order.
 * From the fourth customer, we collect a $10 bill and give back a $5.
 * From the fifth customer, we give a $10 bill and a $5 bill.
 * Since all customers got correct change, we output true.
 *
 *
 * Example 2:
 *
 *
 * Input: bills = [5,5,10,10,20]
 * Output: false
 * Explanation:
 * From the first two customers in order, we collect two $5 bills.
 * For the next two customers in order, we collect a $10 bill and give back a
 * $5 bill.
 * For the last customer, we can not give the change of $15 back because we
 * only have two $10 bills.
 * Since not every customer received the correct change, the answer is
 * false.
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= bills.length <= 10^5
 * bills[i] is either 5, 10, or 20.
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
class Solution {
   public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for (int i : bills) {
            if (i == 5) {  // collect five
                five++;
            } else if (i == 10) {  // collect ten
                five--;
                ten++;
            } else if (ten > 0) {  // cost ten first
                ten--;
                five--;
            } else {  // if we haven't ten, then cost 3*five
                five -= 3;
            }
            if (five < 0) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
/*

@lc testcase=start
[5,5,5,10,20]
@lc testcase=end

* */
