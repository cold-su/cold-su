/*
 * @lc app=leetcode.cn id=3120 lang=cpp
 *
 * [3120] 统计特殊字母的数量 I
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
    int numberOfSpecialChars(string word)
    {
        vector<int> upper(26, 0), lower(26, 0);
        for (char& str : word) {
            if ('A' <= str && str <= 'Z') {
                upper[str - 'A']++;
            } else {
                lower[str - 'a']++;
            }
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            if (upper[i] != 0 && lower[i] != 0) {
                cnt++;
            }
        }
        return cnt;
    }
};
// @lc code=end