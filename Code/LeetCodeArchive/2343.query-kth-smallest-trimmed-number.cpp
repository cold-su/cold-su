/*
 * @lc app=leetcode id=2343 lang=cpp
 *
 * [2343] Query Kth Smallest Trimmed Number
 */
#include <bits/stdc++.h>
using namespace std;
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

// @lc code=start
class Solution {
   public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> res;
        for (auto x : queries) {
            priority_queue<pair<string, int>> v;
            for (int i = 0; i < nums.size(); i++) {
                int t = nums[i].length() - x[1];
                string p = nums[i].substr(t, x[1]);
                if (v.size() < x[0])
                    v.push({p, i});
                else {
                    if (v.top().first > p) {
                        v.pop();
                        v.push({p, i});
                    }
                }
            }
            int val = v.top().second;
            res.push_back(val);
        }
        return res;
    }
};
// @lc code=end
