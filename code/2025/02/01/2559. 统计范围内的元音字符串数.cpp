class Solution {
  public:
	vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& vec) {
		auto is = [] (std::string s) {
			auto __is = [] (char c) {
				return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
			};
			return __is(s.front()) and __is(s.back());
		};
		std::vector<int> a(words.size() + 1);
		int i = 1;
		for (auto s : words) {
			a[i] = is(s);
			i++;
		}
		std::partial_sum(a.begin() + 1, a.end(), a.begin() + 1);
		std::vector<int> ans;
		for (auto v : vec) {
			ans.push_back(a[v[1] + 1] - a[v[0]]);
		}
		return ans;
	}
};