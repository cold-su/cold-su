class KthLargest {
  public:
	int k;
	std::vector<int> p;
	KthLargest(int k, vector<int>& nums) : k(k), p(nums) {

	}

	int add(int val) {
		p.push_back(val);
		int n = p.size();
		std::ranges::nth_element(p, p.begin() + n - k);
		return p[n - k];
	}
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */