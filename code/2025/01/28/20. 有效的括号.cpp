class Solution {
  public:
	bool isValid(string s) {
		int n = s.size();
		if (n & 1) {
			return false;
		}
		std::stack<char> p;
		std::map<char, char> map {
			{')', '('},
			{']', '['},
			{'}', '{'}
		};
		for (char c : s) {
			if (c == ')' || c == ']' || c == '}') {
				if (p.empty()) {
					return false;
				}
				char x = p.top();
				p.pop();
				if (x == map[c]) {

				} else {
					return false;
				}
			} else {
				p.push(c);
			}
		}
		if (p.size() != 0) {
			return false;
		}
		return true;
	}
};