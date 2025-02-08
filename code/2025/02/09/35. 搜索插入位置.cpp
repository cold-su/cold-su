class Solution {
  public:
	int searchInsert(vector<int>& a, int t) {
		return std::ranges::lower_bound(a, t) - a.begin();
	}
};