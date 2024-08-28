class Solution {
public: // 先把矩阵的元素按照对角线翻转一下，然后再逐行逆序就可以了
    void rotate(vector<vector<int>>& matrix) {
        // 按对角线反转
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < i; j++) { // j < i
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
        // 双指针逆序
        for(auto& prev : matrix) {
            int i = 0;
            int j = prev.size() - 1;
            while (i <= j) {
                std::swap(prev[i++], prev[j--]);
            }
        }
    }
};