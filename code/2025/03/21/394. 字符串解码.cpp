class Solution {
public:
	int i = 0;
	string decodeString(string s, int k = 0) {
		int n = s.size();
		std::string ans {};
		for (; i < n; i++) {
			char c = s[i];
			if ('a' <= c and c <= 'z') {
				ans += c;
			} else if (c == '[') {
				i++;
				auto t = decodeString(s);
				for (int j = 0; j < k; j++) {
					ans += t;
				}
				k = 0;
			} else if (c == ']') {
				break;
			} else if ('0' <= c and c <= '9') {
				k *= 10;
				k += c - '0';
			}
		}
		return ans;
	}
};