class Solution {
public:
	vector<vector<int>> findMatrix(vector<int>& a) {
		std::map<int, int> map;
		int max_r = 0;
		for (int x : a) {
			map[x]++;
			max_r = std::max(max_r, map[x]);
		}
		std::vector ans(max_r, std::vector<int>(0));
		int n = a.size();
		for (size_t i = max_r; i--;) {
			for (auto& [k, v] : map) {
				if (v) {
					ans[i].push_back(k);
					v--;
				}
			}
		}
		return ans;
	}
};