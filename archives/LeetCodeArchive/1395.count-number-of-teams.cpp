/*
 * @lc app=leetcode id=1395 lang=cpp
 *
 * [1395] Count Number of Teams
 */

// @lc code=start
class Solution {
   public:
    int numTeams(vector<int>& rating) {
        int res = 0;
        for (int i = 1; i < rating.size() - 1; ++i) {
            int less[2] = {};
            int greater[2] = {};
            for (int j = 0; j < rating.size(); ++j) {
                if (rating[i] < rating[j]) {
                    ++less[j > i];
                }
                if (rating[i] > rating[j]) {
                    ++greater[j > i];
                }
            }
            res += less[0] * greater[1] + greater[0] * less[1];
        }
        return res;
    }
};
// @lc code=end
