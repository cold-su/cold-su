class Solution
{
public:
	bool
	wordBreak(std::string s, std::vector<std::string>& wordDict)
	{
		auto dict = std::set(wordDict.begin(), wordDict.end());
		// dfs(i) == if valid in i...(n - 1)
		int n = s.size();
		std::vector<int> vis(n, -1);
		auto dfs = [&](this auto& self, int i) -> bool {
			if (i >= n) {
				return true;
			}
			auto& res = vis[i];
			if (res != -1) {
				return res;
			}
			for (int j = i; j < n; j++) {
				auto tmp = s.substr(i, j - i + 1);
				if (dict.find(tmp) != dict.end() and self(j + 1)) {
					return res = true;
				}
			}
			return res = false;
		};
		return dfs(0);
	}
};