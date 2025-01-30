class Solution {
  public:
	long long interchangeableRectangles(vector<vector<int>>& a) {
		unsigned long long ans = 0;
		std::map<double, int> map;
		int n = a.size();
		for (int i = 0; i < n; i++) {
			double x = a[i][0] / (double) a[i][1];
			if (map.count(x)) {
				ans += map[x];
			}
			map[x]++;
		}
		return ans;
	}
};