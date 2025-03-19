class Solution {
public:
	bool backspaceCompare(string s, string t) {
		auto work = [](std::string s) {
			std::vector<char> res;
			for (char c : s) {
				if (c == '#') {
					if (res.size() != 0) {
						res.pop_back();
					}
				} else {
					res.push_back(c);
				}
			}
			return res;
		};
		return work(s) == work(t);
	}
};