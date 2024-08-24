/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
const static auto initialize = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
  public:
    vector<int> answer;
    map<int, int> map;
    vector<int> array;

    vector<int> topKFrequent(vector<int>& nums, int k) {
        for (auto i : nums) {
            map[i]++;
        }
        for (auto it = map.begin(); it != map.end(); it++) {
            array.push_back(it->second);
        }
        std::sort(array.begin(), array.end(), greater<int>());
        Solution::solve(k);
        return answer;
    }

  private:
    void solve(int& k) {
        int index = 0;
        int bak = k - 1;
        while (k-- > 0 || !(index > bak)) {
            __solve(index, bak);
        }
    }

    void __solve(int& index, int& bak) {
        for (auto it = map.begin(); it != map.end(); it++) {
            if (index > bak == true) {
                break;
            }
            if (it->second == array[index]) {
                answer.push_back(it->first);
                index++;
            }
        }
    }
};
// @lc code=end
