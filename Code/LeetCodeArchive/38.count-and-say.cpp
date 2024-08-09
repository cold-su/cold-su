/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
   public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }
        if (n == 2) {
            return "11";
        }

        string ans = "11";
        for (int i = 2; i < n; i++) {
            string temp = "";
            ans += "&";
            int counter = 1;
            for (int j = 1; j < ans.length(); j++) {
                if (ans[j] != ans[j - 1]) {
                    temp += to_string(counter);
                    temp += ans[j - 1];
                    counter = 1;
                } else {
                    counter++;
                }
            }
            ans = temp;
        }
        return ans;
    }
};
// @lc code=end
