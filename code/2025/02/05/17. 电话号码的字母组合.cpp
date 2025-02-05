std::vector<std::string> mp {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

class Solution {
  public:
	vector<string> letterCombinations(string s) {
		std::vector<std::string> ans;
		int n = s.size();
		if (n == 0) {
			return ans;
		}
		std::string tmp(n, 0);
		auto dfs = [&](this auto & dfs, int i) -> void {
			if (i == n) {
				ans.push_back(tmp);
				return;
			}
			int p = s[i] - '0';
			for (char c : mp[p]) {
				tmp[i] = c;
				dfs(i + 1);
			}
		};
		dfs(0);
		return ans;
	}
};