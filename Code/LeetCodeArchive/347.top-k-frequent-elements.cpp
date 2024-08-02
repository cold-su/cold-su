/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> u;
        for(auto j:nums){
            u[j]++;
        }
        vector<int> arr;
        for(auto [key,val]:u){
            arr.push_back(val);
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int outdex=0,bak=k-1;
        vector<int> ret;
        while(k-->0){
            if(outdex>bak==true) break;
            for(auto [key,val]:u){
                if(outdex>bak==true) break;
                if(val==arr[outdex]){
                    ret.push_back(key);
                    outdex++;
                }
            }
        }
        return ret;
    }
};
// @lc code=end
