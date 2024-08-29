/*
 * @lc app=leetcode.cn id=3258 lang=cpp
 *
 * [3258] 统计满足 K 约束的子字符串数量 I
 */
#include <bits/stdc++.h>
using namespace std;
using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();
// @lc code=start
class Solution {
public:
    int countKConstraintSubstrings(string s, int k)
    {
        int left = 0;
        int ans = 0;
        vector<int> cnt(2, 0);
        for (int i = 0; i < s.length(); i++) {
            cnt[s[i] % 2]++;
            while (cnt[0] > k && cnt[1] > k) {
                cnt[s[left] % 2]--;
                left++;
            }
            ans += i - left + 1;
        }
        return ans;
    }
};
// @lc code=end
