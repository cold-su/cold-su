class Solution {
public:
	int minimumOperations(vector<int>& a) {
		std::map<int, int> map;
		for (int x : a) {
			if (x > 0) {
				map[x]++;
			}
		}
		return map.size();
	}
};