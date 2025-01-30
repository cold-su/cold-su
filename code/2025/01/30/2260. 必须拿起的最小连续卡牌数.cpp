class Solution {
  public:
	int minimumCardPickup(vector<int>& a) {
		std::map<int, int> map;
		std::vector<int> ans;
		for (int i = 0; i < a.size(); i++) {
			if (map.count(a[i])) {
				ans.emplace_back(i - map[a[i]] + 1);
			}
			map[a[i]] = i;
		}
		if (ans.size() == 0) {
			return -1;
		}
		return std::ranges::min(ans);
	}
};