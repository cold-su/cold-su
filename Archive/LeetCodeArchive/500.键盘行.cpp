/*
 * @lc app=leetcode.cn id=500 lang=cpp
 *
 * [500] 键盘行
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
    vector<string> findWords(vector<string>& words)
    {
        vector<string> resu;

        string _1 = "qwertyuiopQWERTYUIOP";
        string _2 = "asdfghjklASDFGHJKL";
        string _3 = "zxcvbnmZXCVBNM";

        for (auto& word : words) {
            vector<int> temp(3, 0);
            for (auto& str : word) {
                if (_1.find(str) != string::npos) {
                    temp[0]++;
                }
                if (_2.find(str) != string::npos) {
                    temp[1]++;
                }
                if (_3.find(str) != string::npos) {
                    temp[2]++;
                }
            }
            if (*max_element(temp.begin(), temp.end()) == word.size()) {
                resu.push_back(word);
            }
        }
        return resu;
    }
};
// @lc code=end
