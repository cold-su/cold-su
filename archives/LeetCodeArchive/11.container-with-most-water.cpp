/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
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
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int len = right;
        int mid = (left + right) / 2;
        int max = 0;

        for (int i = 0; i < len; i++) {
            int curr_max = (right - left) * (height[left] > height[right] ? height[right] : height[left]);

            if (curr_max > max) {
                max = curr_max;
            }

            if (height[left] >= height[right]) {
                right--;
            } else if (height[left] <= height[right]) {
                left++;
            }
        }

        return max;
    }
};
// @lc code=end
