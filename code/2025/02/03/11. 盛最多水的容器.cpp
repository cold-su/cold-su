class Solution {
  public:
	int maxArea(vector<int>& a) {
		int ans = 0;
		for (int i = 0, j = a.size() - 1; i < j; a[i] > a[j] ? j-- : i++) {
			ans = std::max(ans, std::min(a[i], a[j]) * abs(i - j));
		}
		return ans;
	}
};