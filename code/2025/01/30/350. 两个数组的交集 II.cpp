class Solution {
  public:
	vector<int> intersect(vector<int>& a, vector<int>& b) {
		std::map<int, int> map;
		for (int x : a) {
			map[x]++;
		}
		std::vector<int> ans;
		for (int x : b) {
			if (map[x] >= 1) {
				ans.push_back(x);
				map[x]--;
			}
		}
		return ans;
	}
};