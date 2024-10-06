/*
 * @lc app=leetcode id=1394 lang=cpp
 *
 * [1394] Find Lucky Integer in an Array
 */

// @lc code=start
class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> m;
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        int max= -1;
        for(auto [key, val]:m){
            if(key==val && key>max){
                max=key;
            }
        }
        return max;
    }
};
// @lc code=end

