/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> arr(digits.size()+1);
        for(int i=0; i<digits.size(); i++){
            arr[i+1]=digits[i];
        }
        solve(arr.size()-1, arr);
        if(arr[0]==0) arr.erase(find(arr.begin(), arr.begin()+1, 0));
        return arr;
    }
    void solve(int index, vector<int>& digits){
        if(digits[index]<9) digits[index]++;
        else{
            digits[index]=0;
            index--;
            solve(index, digits);
        }
    }
};
// @lc code=end

