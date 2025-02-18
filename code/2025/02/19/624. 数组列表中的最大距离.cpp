class Solution {
public:
	int maxDistance(vector<vector<int>>& a) {
		int max = INT_MIN, min = INT_MAX;
		int ans = 0;
		for (int i = 0; i < a.size(); i++) {
			if (i == 0) {
				min = a[i].front();
				max = a[i].back();
				continue;
			}
			for (int x : a[i]) {
				ans = std::max({max - a[i].front(), a[i].back() - min, ans});
			}
			min = std::min(min, a[i].front());
			max = std::max(max, a[i].back());
		}
		return ans;
	}
};