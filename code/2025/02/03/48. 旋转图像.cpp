class Solution {
  public:
	void rotate(vector<vector<int>>& matrix) {
		for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < i; j++) {
				std::swap(matrix[i][j], matrix[j][i]);
			}
		}
		for (auto& prev : matrix) {
			int i = 0;
			int j = prev.size() - 1;
			while (i <= j) {
				std::swap(prev[i++], prev[j--]);
			}
		}
	}
};