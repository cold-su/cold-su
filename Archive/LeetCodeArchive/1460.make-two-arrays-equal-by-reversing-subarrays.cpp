/*
 * @lc app=leetcode id=1460 lang=cpp
 *
 * [1460] Make Two Arrays Equal by Reversing Subarrays
 */

// @lc code=start
class Solution {
   public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> a(1001);
        vector<int> b(1001);
        for (auto i : arr)
            a[i]++;
        for (auto i : target)
            b[i]++;
        for (int i = 0; i < a.size(); i++)
            if (a[i] != b[i])
                return false;
        return true;
    }
};
// @lc code=end
