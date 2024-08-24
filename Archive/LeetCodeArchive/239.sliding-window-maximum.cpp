/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 *
 * https://leetcode.com/problems/sliding-window-maximum/description/
 *
 * algorithms
 * Hard (46.77%)
 * Likes:    18286
 * Dislikes: 690
 * Total Accepted:    1.1M
 * Total Submissions: 2.3M
 * Testcase Example:  [1,3,-1,-3,5,3,6,7]\n3
 *
 * You are given an array of integers nums, there is a sliding window of size k
 * which is moving from the very left of the array to the very right. You can
 * only see the k numbers in the window. Each time the sliding window moves
 * right by one position.
 *
 * Return the max sliding window.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
 * Output: [3,3,5,5,6,7]
 * Explanation:
 * Window position                Max
 * ---------------               -----
 * [1  3  -1] -3  5  3  6  7       3
 * ⁠1 [3  -1  -3] 5  3  6  7       3
 * ⁠1  3 [-1  -3  5] 3  6  7       5
 * ⁠1  3  -1 [-3  5  3] 6  7       5
 * ⁠1  3  -1  -3 [5  3  6] 7       6
 * ⁠1  3  -1  -3  5 [3  6  7]      7
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [1], k = 1
 * Output: [1]
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 10^5
 * -10^4 <= nums[i] <= 10^4
 * 1 <= k <= nums.length
 *
 *
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
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // FIXME
        vector<int> result;
        if (k == 0)
            return result;
        deque<int> w;
        for (int i = 0, n = (int)nums.size(); i < n; i++) {
            for (auto it = w.begin(); it != w.end(); it++) {
                std::cout << *it << " ";
            }
            std::cout << "\n";
            for (auto it = result.begin(); it != result.end(); it++) {
                std::cout << *it << " ";
            }
            std::cout << "\n\n";

            while (!w.empty() && w.front() <= i - k) {
                w.pop_front();
            }
            while (!w.empty() && nums[w.back()] <= nums[i]) {
                w.pop_back();
            }
            w.push_back(i);
            if (i >= k - 1)
                result.push_back(nums[w.front()]);
        }
        return result;
    }
};
// @lc code=end
/*

@lc testcase=start
[1,3,-1,-3,5,3,6,7]
3
@lc testcase=end

* */
