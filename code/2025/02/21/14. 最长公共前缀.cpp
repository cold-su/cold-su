class Solution {
public:
	string longestCommonPrefix(vector<string>& a) {
		std::string ans {};
		int i = 0, j = 0;
		std::ranges::sort(a);
		while (i < a[0].size()) {
			char x = a[j][i];
			for (auto &s : a) {
				if (s[i] != x) {
					return ans;
				}
			}
			ans += x;
			i++;
		}
		return ans;
	}
};