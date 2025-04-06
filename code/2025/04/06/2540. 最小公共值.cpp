class Solution {
public:
	int getCommon(vector<int>& a, vector<int>& b) {
		std::set<int> c(a.begin(), a.end());
		int ans = INT_MAX;
		for (int x : b) {
			if (c.count(x)) {
				ans = std::min(ans, x);
			}
		}
		return ans == INT_MAX ? -1 : ans;
	}
};