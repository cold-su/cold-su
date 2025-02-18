class Solution {
public:
	int findRepeatDocument(vector<int>& a) {
		std::map<int, bool> map;
		for (int x : a) {
			if (map.count(x)) {
				return x;
			}
			map[x] = true;
		}
		return 0;
	}
};