/*
 * @lc app=leetcode id=2284 lang=cpp
 *
 * [2284] Sender With Largest Word Count
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
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        vector<int> arr;
        for (int i = 0; i < messages.size(); i++) {
            arr.push_back(count(messages[i]));
        }
        unordered_map<string, int> mp;
        for (int i = 0; i < senders.size(); i++) {
            mp[senders[i]] += arr[i];
        }
        int max = INT_MIN;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second > max) {
                max = it->second;
            }
        }
        vector<string> ans;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second == max) {
                ans.push_back(it->first);
            }
        }
        std::sort(ans.rbegin(), ans.rend());
        return ans[0];
    }
    int count(string target) {
        int counter = 1;
        for (auto prev : target) {
            if (prev == ' ') {
                counter++;
            }
        }
        return counter;
    }
};
// @lc code=end
