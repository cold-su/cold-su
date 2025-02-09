class Solution {
  public:
	int maximumCostSubstring(string s, string chars, vector<int>& vals) {
		int k = 26;
		std::vector<bool> on(k, false);
		for (char c : chars) {
			on[c - 'a'] = true;
		}
		auto val = [&](char c) {
			if (!on[c - 'a']) {
				return c - 'a' + 1;
			}
			for (int i = 0; i < chars.size(); i++) {
				if (chars[i] == c) {
					return vals[i];
				}
			}
			return 0;
		};
		int n = s.size();
		std::vector<int> dp(n, val(s[0]));
		for (int i = 1; i < n; i++) {
			dp[i] = fmax(val(s[i]), dp[i - 1] + val(s[i]));
		}
		return fmax(0, std::ranges::max(dp));
	}
};