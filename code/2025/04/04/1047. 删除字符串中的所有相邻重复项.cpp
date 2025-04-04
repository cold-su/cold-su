class Solution {
public:
	string removeDuplicates(string s) {
		std::vector<char> a;
		for (int i = 0, n = s.size(); i < n; i++) {
			if (not a.empty() and a.back() == s[i]) {
				a.pop_back();
			} else {
				a.push_back(s[i]);
			}
		}
		return std::string(a.begin(), a.end());
	}
};