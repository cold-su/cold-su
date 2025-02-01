class Solution {
  public:
	string findValidPair(string s) {
		std::map<int, int> map;
		for (char c : s) {
			map[c]++;
		}
		int i = 0, j = 1;
		while (j < s.size()) {
			char a = s[i], b = s[j];
			if (a != b) {
				if (map[a] == a - '0' and map[b] == b - '0') {
					return std::format("{}{}", a, b);
				}
			}
			i++, j++;
		}
		return "";
	}
};