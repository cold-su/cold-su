class Solution {
public:
	int similarPairs(vector<string>& a) {
		std::map<std::vector<bool>, int> map;
		for (auto && s : a) {
			map[make(s)]++;
		}
		int ans = 0;
		for (auto && [k, v] : map) {
			ans += v * (v - 1) / 2;
		}
		return ans;
	}

	std::vector<bool> make(std::string s) {
		std::vector<bool> ans(26);
		for (auto c : s) {
			ans[c - 'a'] = true;
		}
		return ans;
	}
};