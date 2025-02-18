class RangeFreqQuery {
public:
	std::map<int, std::vector<int>> map;
	RangeFreqQuery(vector<int>& a) {
		int n = a.size();
		for (int i = 0; i < n; i++) {
			map[a[i]].emplace_back(i);
		}
	}

	int query(int left, int right, int value) {
		if (map.count(value) == 0) {
			return 0;
		}
		auto& v = map[value];
		return std::ranges::upper_bound(v, right) - std::ranges::lower_bound(v, left);
	}
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */