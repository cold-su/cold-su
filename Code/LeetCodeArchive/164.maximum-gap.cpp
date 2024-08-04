/*
 * @lc app=leetcode id=164 lang=cpp
 *
 * [164] Maximum Gap
 */

// @lc code=start
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()==1) return 0;
        sort(nums.begin(), nums.end());
        if(nums.size()==2) return nums[1]-nums[0];
        int max=0, len=nums.size();
        while(len-->1){
            int counter=nums[len]-nums[len-1];
            max= counter>max? counter:max;
        }
        return max;
    }
};
// @lc code=end
