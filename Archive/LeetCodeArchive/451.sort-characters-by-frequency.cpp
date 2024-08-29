/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
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
    string ans;
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        int counter = 0;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        vector<int> top;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            counter++;
            top.push_back(it->second);
        }
        std::sort(top.begin(), top.end(), greater<int>());
        int index = 0;
        while (counter-- > 0) {
            inserter(mp, top[index++]);
        }
        return ans;
    }

    void inserter(unordered_map<char, int>& mp, int target) {
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second == target) {
                while (it->second-- > 0) {
                    ans += it->first;
                }
            }
        }
    }
};
// @lc code=end
