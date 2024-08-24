/*
 * @lc app=leetcode id=3016 lang=cpp
 *
 * [3016] Minimum Number of Pushes to Type Word II
 */

// @lc code=start
class Solution {
public:
    int minimumPushes(string word) {
        vector<int> arr(26, 0);
        for(auto prev:word){
            arr[prev-'a']++;
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int ans=0;
        for(int i=0; i<26; i++){
            if(arr.size()==0)break;
            ans+=(i/8 +1)*arr[i];
        }
        return ans;
    }
};
// @lc code=end

