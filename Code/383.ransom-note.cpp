/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
   public:
    bool canConstruct(string ransomNote, string magazine) {
        for (auto i : ransomNote) {
            if (magazine.find(i) != -1) {
                magazine.erase(magazine.find(i), 1);
            } else
                return false;
        }
        return true;
    }
};
// @lc code=end
