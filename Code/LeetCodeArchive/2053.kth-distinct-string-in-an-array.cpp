/*
 * @lc app=leetcode id=2053 lang=cpp
 *
 * [2053] Kth Distinct String in an Array
 */

// @lc code=start
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        for(int i=0; i<arr.size(); i++){
            if(mp[arr[i]]==1) k--;
            if(k==0) return arr[i];
        }
        return "";
    }
};
// @lc code=end

