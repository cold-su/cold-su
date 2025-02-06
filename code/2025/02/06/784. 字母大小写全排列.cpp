class Solution {
  public:
	vector<string> letterCasePermutation(string s) {
		int n = s.size();
		std::string p;
		std::vector<std::string> ans;
		auto dfs = [&](this auto && self, int i) -> void {
			if (i == n) {
				ans.push_back(p);
				return;
			}
			char x = s[i];
			if ('0' <= x and x <= '9') {
				p += x;
				self(i + 1);
				p.pop_back();
			} else {
				for (auto y : (int[]) {x, x ^ 32}) {
					p += y;
					self(i + 1);
					p.pop_back();
				}
			}
		};
		dfs(0);
		return ans;
	}
};