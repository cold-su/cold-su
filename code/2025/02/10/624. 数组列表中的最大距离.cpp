class Solution {
  public:
	int maxDistance(vector<vector<int>>& a) {
		int f[2] {INT_MAX, INT_MIN};
		int ans = 0;
		for (auto x : a) {
			for (int i = 0; i < x.size(); i++) {
				if (f[0] != INT_MAX) {
					ans = std::max({abs(f[0] - x[i]), abs(f[1] - x[i]), ans});
				}
			}
			f[0] = fmin(f[0], x.front());
			f[1] = fmax(f[1], x.back());
		}
		return ans;
	}
};