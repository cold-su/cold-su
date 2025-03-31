class Solution {
public:
	int maxActiveSectionsAfterTrade(string s) {
		std::vector<int> a;
		for (int i = 0, c = 0, n = s.size(); i < n; i++) {
			c += s[i] == '0';
			if ((s[i] == '1' or i == n - 1) and c != 0) {
				a.push_back(c);
				c = 0;
			}
		}
		int m = 0;
		for (int i = 0, n = a.size(); i + 1 < n; i++) {
			m = std::max(m, a[i] + a[i + 1]);
		}
		return std::count(s.begin(), s.end(), '1') + m;
	}
};