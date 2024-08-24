/*
 * @lc app=leetcode id=692 lang=cpp
 *
 * [692] Top K Frequent Words
 */

// @lc code=start
const static auto initialize = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
   public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;
        for (auto prev : words) {
            mp[prev]++;
        }
        vector<int> top;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            top.push_back(it->second);
        }
        std::sort(top.rbegin(), top.rend());
        int index = 0;
        vector<string> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(finder(top[i], mp));
        }
        return ans;
    }
    string finder(int target, map<string, int>& mp) {
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second == target) {
                it->second = -1;
                return it->first;
            }
        }
        return "";
    }
};
// @lc code=end
