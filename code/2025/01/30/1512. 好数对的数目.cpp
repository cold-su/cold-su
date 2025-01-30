class Solution {
  public:
	int numIdenticalPairs(vector<int>& a) {
		int n = a.size();
		std::map<int, int> map;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			int x = a[i];
			if (map.count(x)) {
				ans += map[x];
			}
			map[x]++;
		}
		return ans;
	}
};