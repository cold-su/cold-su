/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> array(digits.size() + 1);
        for (int i = 0; i < digits.size(); i++) {
            array[i + 1] = digits[i];
        }
        solve(array.size() - 1, array);
        if (array[0] == 0) {
            array.erase(std::find(array.begin(), array.begin() + 1, 0));
        }
        return array;
    }
    void solve(int index, vector<int>& digits) {
        if (digits[index] < 9) {
            digits[index]++;
        } else {
            digits[index] = 0;
            index--;
            solve(index, digits);
        }
    }
};
// @lc code=end
