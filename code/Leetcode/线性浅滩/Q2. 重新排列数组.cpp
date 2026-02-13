class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(n * 2);
        for (int i = 0, j = 0; i < n; i++, j += 2) {
            res[j] = nums[i];
        }
        for (int i = n, j = 1; i < n * 2; i++, j += 2) {
            res[j] = nums[i];
        }
        return res;
    }
};