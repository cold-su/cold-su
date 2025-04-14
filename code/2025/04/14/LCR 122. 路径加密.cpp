class Solution {
public:
	string pathEncryption(string s) {
		for (auto& c : s) {
			if (c == '.') {
				c = ' ';
			}
		}
		return s;
	}
};