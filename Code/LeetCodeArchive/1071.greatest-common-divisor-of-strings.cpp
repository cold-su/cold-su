/*
 * @lc app=leetcode id=1071 lang=cpp
 *
 * [1071] Greatest Common Divisor of Strings
 */

// @lc code=start
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int maxer_len=str1>str2? str1.length():str2.length();
        int miner_len=str1<str2? str1.length():str2.length();
        int mid=maxer_len;
        int mid_index=mid-1;
        while(mid_index-->0){
            if(mid>miner_len) continue;
            for(int i=0; i<; i++){

            }
        }
    }
};
// @lc code=end

