/*
 * @lc app=leetcode id=1636 lang=cpp
 *
 * [1636] Sort Array by Increasing Frequency
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
   public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        std::sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] == freq[b]) {
                return a > b;
            }
            return freq[a] < freq[b];
        }());

        return nums;
    }
};  // TODO

class Solution {
   public:
    static vector<int> frequencySort(vector<int>& nums) {
        constexpr int8_t MINV = -100, MAXV = 100;
        constexpr uint8_t FSIZE = MAXV - MINV + 1u;
        uint16_t freqsv[FSIZE];
        iota(freqsv, freqsv + FSIZE, 100u << 8);
        for (const int v : nums)
            freqsv[v - MINV] -= 1u << 8;
        sort(freqsv, freqsv + FSIZE, greater());
        nums.clear();
        for (const uint16_t fv : freqsv)
            nums.insert(nums.end(), 100u - (fv >> 8), (fv & 0xFF) + MINV);
        return move(nums);
    }
};

// @lc code=end
