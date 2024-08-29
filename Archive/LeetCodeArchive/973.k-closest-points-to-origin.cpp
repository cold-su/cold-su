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
        vector<vector<double>> distance;
        /// vector<double> (*caculate)(int x, int y, int i) = [](int x, int y, int i)
        auto caculate = [](int x, int y, int i) -> vector<double> {
            vector<double> tmp(2);
            int p1 = pow(x, 2);
            int p2 = pow(y, 2);
            double p = pow(p1 + p2, 0.5);
            // saving
            tmp[1] = i;
            tmp[0] = p;
            return tmp;
        };
        for (int i = 0; i < points.size(); i++) {
            // caculate the distances
            distance.push_back(caculate(points[i][0], points[i][1], i));
        }
        std::sort(distance.begin(), distance.end());
        vector<vector<int>> answer;
        int index = 0;
        while (k-- > 0) {
            answer.push_back(points[distance[index][1]]);
            index++;
        }
        return answer;
    }
};
// @lc code=end