// 杨氏矩阵查找算法 / Step-wise线性搜索
class Solution {
  public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int n = matrix.size(), m = matrix[0].size();
		int i = 0, j = m - 1;
		for (; i < n and j >= 0;) {
			if (matrix[i][j] == target) {
				return true;
			}
			if (target > matrix[i][j]) {
				i++;
			} else {
				j--;
			}
		}
		return false;
	}
};

// 每行二分
class Solution {
  public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		for (auto &x : matrix) {
			auto p = std::ranges::lower_bound(x, target);
			if (p != x.end() and target == *p) {
				return true;
			}
		}
		return false;
	}
};