/*
 * @lc app=leetcode id=2243 lang=cpp
 *
 * [2243] Calculate Digit Sum of a String
 */

// @lc code=start
class Solution {
   public:
    string digitSum(string s, int k) {
        for (; s.size() > k;) {
            string res = "";
            for (int i = 0; i < s.size();) {
                int sum = 0, j = i;
                for (; j < i + k and j < s.size(); j++)
                    sum += (s[j] - '0');
                res += to_string(sum);
                i = j;
            }
            s = res;
        }
        return s;
    }
};
// @lc code=end
