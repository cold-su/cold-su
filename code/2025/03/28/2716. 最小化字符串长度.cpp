class Solution {
public:
	int minimizedStringLength(string s) {
		std::set<char> set(s.begin(), s.end());
		return set.size();
	}
};