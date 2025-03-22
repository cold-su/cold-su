class Solution {
public:
	vector<int> rowAndMaximumOnes(vector<vector<int>>& a) {
		std::map<int, int> map;
		int n = a.size();
		for (int i = 0; i < n; i++) {
			map.insert(std::make_pair(-std::count(a[i].begin(), a[i].end(), 1), i));
		}
		return {map.begin()->second, -map.begin()->first};
	}
};