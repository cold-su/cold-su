class Solution {
  public:
	int similarPairs(vector<string>& words) {
		std::map<std::vector<bool>, int> map;
		for (int i = 0; i < words.size(); i++) {
			std::vector<bool> t(26);
			for (int j = 0; j < words[i].size(); j++) {
				t[words[i][j] - 'a'] = true;
			}
			map[t]++;
		}
		int ans = 0;
		for (auto && [_, v] : map) {
			ans += v * (v - 1) / 2;
		}
		return ans;
	}
};