// 453. 最小操作次数使数组元素相等
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min = *std::min_element(nums.begin(), nums.end());
        int res = 0;
        for (int prev : nums) {
            res += prev - min;
        }
        return res;
    }
};