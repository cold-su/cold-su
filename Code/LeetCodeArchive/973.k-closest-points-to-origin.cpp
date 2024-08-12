// @before-stub-for-debug-begin
#include <string>
#include <vector>
#include "commoncppproblem973.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=973 lang=cpp
 *
 * [973] K Closest Points to Origin
 */

// @lc code=start
const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

class Solution {
   public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<float>> distance;
        vector<float> tmp(2);
        for (int i = 0; i < points.size(); i++) {
            tmp[1] = i;
            auto p1 = pow(points[i][0], 2);
            auto p2 = pow(points[i][1], 2);
            auto p = pow(p1 + p2, 0.5);
            tmp[0] = p;
            distance.push_back(tmp);
        }
        std::sort(distance.begin(), distance.end());
        vector<vector<int>> answer;
        int i = 0;
        while (k-- > 0) {
            int index = distance[i][1];
            answer.push_back(points[index]);
            i++;
        }
        return answer;
    }
};
// @lc code=end