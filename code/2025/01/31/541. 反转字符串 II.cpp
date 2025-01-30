class Solution {
  public:
	string reverseStr(string s, int k) {
		int i = 0;
		for (; i + k < s.size(); i += k * 2) {
			std::reverse(s.begin() + i, s.begin() + i + k);
		}
		std::reverse(s.begin() + i, s.end());
		return s;
	}
};