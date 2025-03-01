class Solution {
	bool is(std::string s) {
		for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
			if (s[i] != s[j]) {
				return false;
			}
		}
		return true;
	}
public:
	vector<vector<string>> partition(string s) {
		std::vector<std::vector<std::string>> ans;
		std::vector<std::string> p;
		auto dfs = [&](this auto & dfs, int i) {
			int n = s.size();
			if (i == n) {
				ans.push_back(p);
				return;
			}
			// dfs(i + 1);
			for (int j = i; j < n; j++) {
				auto t = s.substr(i, j - i + 1);
				if (is(t)) {
					p.push_back(t);
					dfs(j + 1);
					p.pop_back();
				}
			}
		};
		dfs(0);
		return ans;
	}
};