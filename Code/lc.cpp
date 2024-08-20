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

class Solution {
public:
    vector<vector<int>>
    permute(vector<int>& nums)
    {
        int time = 1;
        int single = 1;
        for (int i = 0; i < nums.size(); i++) {
            time *= i + 1;
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            single *= i + 1;
        }
        vector<vector<int>> ans(time, vector<int>(nums.size(), 0));
        // for (int i = 0; i < single; i++) {
        //     ans[i][0] = 1;
        // }

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < single; j++) {
                ans[j][i] = j;
            }
        }

        for (auto& nu : ans) {
            for (int& prev : nu) {
                std::cout << prev << " ";
            }
            std::cout << "\n";
        }
        return vector<vector<int>> {};
    }
};