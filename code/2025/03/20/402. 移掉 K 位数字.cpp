class Solution {
public:
	string removeKdigits(string t, int k) {
		std::deque<char> s;
		for (char c : t) {
			while (not s.empty() and k and s.back() > c) {
				k--;
				s.pop_back();
			}
			s.push_back(c);
		}
		while (k--) {
			s.pop_back();
		}
		while (not s.empty() and s.front() == '0') {
			s.pop_front();
		}
		return s.size() == 0 ? "0" : std::string(s.begin(), s.end());
	}
};