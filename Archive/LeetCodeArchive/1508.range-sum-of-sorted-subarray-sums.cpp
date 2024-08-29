/*
 * @lc app=leetcode id=1508 lang=cpp
 *
 * [1508] Range Sum of Sorted Subarray Sums
 */

// @lc code=start
class Solution {
   public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> arr;
        int index = 0;
        while (index < nums.size()) {
            int tmp = 0;
            for (int i = index; i < nums.size(); i++) {
                tmp += nums[i];
                arr.push_back(tmp);
            }
            index++;
        }
        sort(arr.begin(), arr.end());
        // for(auto prev:arr){
        //     std::cout<<prev<<" ";
        // }
        long ans = 0, mod = 1e9 + 7;
        for (int i = left - 1; i <= right - 1; i++) {
            ans = (ans + arr[i]) % mod;
        }
        return ans;
    }
};
// @lc code=end
