class Solution {
  public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		std::map<std::string, std::vector<std::string> > map;
		for (auto s : strs) {
			auto t = s;
			std::ranges::sort(t);
			map[t].push_back(s);
		}
		std::vector ans(0, std::vector<std::string> (0));
		for (auto [k, v] : map) {
			ans.push_back(v);
		}
		return ans;
	}
};