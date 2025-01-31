class NumArray {
  public:
	std::vector<int> p {0};
	NumArray(vector<int>& nums) {
		p.resize(nums.size() + 1);
		std::partial_sum(nums.begin(), nums.end(), p.begin() + 1);
		// for (int x : p) {
		// 	std::cout << x << " ";
		// }
	}

	int sumRange(int l, int r) {
		return p[++r] - p[l];
	}
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */