class Solution {
public:
	string longestCommonPrefix(vector<string>& a) {
		std::string ans {};
		std::ranges::sort(a);
		for (int i = 0; i < a[0].size(); i++) {
			char x = a[0][i];
			for (auto &s : a) {
				if (s[i] != x) {
					return ans;
				}
			}
			ans += x;
		}
		return ans;
	}
};