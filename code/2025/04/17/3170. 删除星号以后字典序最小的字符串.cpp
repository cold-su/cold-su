class Solution {
public:
	string clearStars(string s) {
		std::set<std::pair<char, int>> a;
		int n = s.size();
		std::vector<bool> b(n, true);
		for (int i = 0; i < n; i++) {
			if (s[i] == '*') {
				b[-(*a.begin()).second] = b[i] = false;
				a.erase(a.begin());
			} else {
				a.insert({s[i], -i});
			}
		}
		std::string ans {};
		for (int i = 0; i < n; i++) {
			if (b[i]) {
				ans += s[i];
			}
		}
		return ans;
	}
};