class Solution {
  public:
	int maxProfit(vector<int>& a) {
		int ans = 0;
		int n = a.size();
		int l = a.front();
		for (int i = 1; i < n; i++) {
			if (a[i] < l) {
				l = a[i];
			} else {
				ans = std::max(ans, a[i] - l);
			}
		}
		return ans;
	}
};