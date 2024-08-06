/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int sz=right;
        int mid=(left+right)/2, max=0;

        for(int i=0; i<sz; i++) {

            int curr_max=(right-left)*(height[left]>height[right]? height[right]:height[left]);

            if(curr_max>max) {
                max=curr_max;
            }

            if(height[left]>=height[right]) {
                right--;
            }
            else if(height[left]<=height[right]) {
                left++;
            }
        }
        
        return max;
    }
};
// @lc code=end

