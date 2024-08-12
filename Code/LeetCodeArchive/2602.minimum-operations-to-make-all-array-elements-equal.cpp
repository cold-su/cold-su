/*
 * @lc app=leetcode id=2602 lang=cpp
 *
 * [2602] Minimum Operations to Make All Array Elements Equal
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

class Solution {
   public:  // TODO
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        vector<long long> ans;
        for (int i = 0; i < queries.size(); ++i) {
            long long curr = 0;
            int target = queries[i];
            // FIXME TLE
            for (int prev : nums) {
                curr += abs(prev - target);
            }
            ans.push_back(curr);
        }
        return ans;
    }
};
// @lc code=end
/*

@lc testcase=start
[3,1,6,8]
[1,5]
@lc testcase=end

* */
