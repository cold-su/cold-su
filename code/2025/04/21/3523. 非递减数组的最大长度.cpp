class Solution {
public:
	int maximumPossibleSize(vector<int>& nums) {
		std::vector<int> s {0};
		for (int x : nums) {
			if (x >= s.back()) {
				s.push_back(x);
			}
		}
		return s.size() - 1;
	}
};