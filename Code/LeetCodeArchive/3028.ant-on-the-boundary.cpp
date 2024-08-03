/*
 * @lc app=leetcode id=3028 lang=cpp
 *
 * [3028] Ant on the Boundary
 */

// @lc code=start
class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int step=0, counter=0;
        for(int i=0; i<nums.size(); i++){
            step+=nums[i];
            if(step==0){
                counter++;
            }
        }
        return counter;
    }
};
// @lc code=end

