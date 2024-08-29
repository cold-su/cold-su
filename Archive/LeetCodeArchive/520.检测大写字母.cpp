/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
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
    bool detectCapitalUse(string word)
    {
        string upper = "QWERTYUIOPASDFGHJKLZXCVBNM";

        vector<int> temp(2, 0);

        bool is = true;
        for (auto& str : word) {
            if (upper.find(str) != string::npos) {
                if (temp[1] != 0) {
                    is = false;
                }
                temp[0]++;
            } else {
                temp[1]++;
            }
        }

        if (temp[0] == word.length()) {
            return true;
        }
        if (temp[1] == word.length()) {
            return true;
        }
        if (temp[1] + 1 == word.length() && is) {
            return true;
        }
        return false;
    }
};
// @lc code=end
