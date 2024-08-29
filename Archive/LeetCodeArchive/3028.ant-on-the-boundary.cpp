/*
 * @lc app=leetcode id=3028 lang=cpp
 *
 * [3028] Ant on the Boundary
 */

// @lc code=start
class Solution {
   public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<vector<int>> arr(n, vector<int>(11, 0));
        for (int i = 0; i < pick.size(); i++) {
            arr[pick[i][0]][pick[i][1]]++;
        }
        int counter = 0;
        for (int i = 0; i < n; i++) {
            int max = *max_element(arr[i].begin(), arr[i].end());
            if (max >= i + 1)
                counter++;
        }
        // @note
        // for(auto line:arr){
        //     for(auto prev:line){
        //         std::cout<<prev<<" ";
        //     }
        //     std::cout<<"\n";
        // }
        // std::cout<<"\n";
        return counter;
    }
};
// @lc code=end
