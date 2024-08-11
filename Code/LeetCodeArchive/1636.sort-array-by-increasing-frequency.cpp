/*
 * @lc app=leetcode id=1636 lang=cpp
 *
 * [1636] Sort Array by Increasing Frequency
 */

// @lc code=start
class Solution {
   public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;
        for (auto num : nums) {
            mp[num]++;
        }
        vector<int> top;
        for (auto it = mp.begin(); it = mp.end(); it++) {
            top.push_back(it->second);
        }
        std::sort(top.rbegin(), top.rend());
        vector<int> ans;
        while (ans.size() != nums.size()) {
            // TODO
        }
        return ans;
    }
};
// @lc code=end
