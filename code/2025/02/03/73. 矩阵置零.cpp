class Solution {
  public:
	std::vector<std::vector<int> > a;
	void setZeroes(vector<vector<int>>& a) {
		this->a = a;
		for (int i = 0; i < a.size(); i++) {
			for (int j = 0; j < a[i].size(); j++) {
				if (a[i][j] == 0) {
					work(i, j);
				}
			}
		}
		a = this->a;
	}

	void work(int i, int j) {
		for (int p = 0; p < a.size(); p++) {
			a[p][j] = 0;
		}
		for (int p = 0; p < a[i].size(); p++) {
			a[i][p] = 0;
		}
	}
};