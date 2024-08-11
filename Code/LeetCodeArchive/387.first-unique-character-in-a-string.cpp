/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
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
    int firstUniqChar(string s) {
        map<char, int> mp;
        for (auto prev : s)
            mp[prev]++;
        for (int i = 0; i < s.length(); i++)
            if (mp[s[i]] == 1)
                return i;
        return -1;
    }
};
// @lc code=end
