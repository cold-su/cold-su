class Solution {
public:
	int minSetSize(vector<int>& arr) {
		std::map<int, int> map;
		for (int x : arr) {
			map[x]++;
		}
		std::vector<std::pair<int, int>> a(map.begin(), map.end());
		std::sort(a.begin(), a.end(), [&](auto l, auto r) {
			return l.second > r.second;
		});
		int n = arr.size(), half = n / 2, tot = n;
		int i = 0;
		for (; i < n and tot > half; i++) {
			tot -= a[i].second;
		}
		return i;
	}
};