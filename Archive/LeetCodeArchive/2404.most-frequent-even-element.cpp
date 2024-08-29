/*
 * @lc app=leetcode id=2404 lang=cpp
 *
 * [2404] Most Frequent Even Element
 */

// @lc code=start
class Solution {
   public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                mp[nums[i]]++;
            }
        }
        int max = 0;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second > max) {
                max = it->second;
            }
        }
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second == max) {
                return it->first;
            }
        }
        return -1;
    }
};
// @lc code=end
