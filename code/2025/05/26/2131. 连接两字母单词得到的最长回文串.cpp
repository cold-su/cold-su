class Solution {
public:
	int longestPalindrome(std::vector<std::string>& words) {
		std::map<std::string, int> map;
		int ans = 0;
		for (auto s : words) {
			auto t = s;
			std::reverse(t.begin(), t.end());
			map[s]++;
			if (s == t) {
				while (map[s] - 2 >= 0) {
					ans += 4;
					map[s] -= 2;
				}
			} else {
				while (map[s] - 1 >= 0 and map[t] - 1 >= 0) {
					map[s] -= 1;
					map[t] -= 1;
					ans += 4;
				}
			}
		}
		for (auto [k, v] : map) {
			auto _k = k;
			std::reverse(_k.begin(), _k.end());
			if (k == _k and v > 0) {
				ans += 2;
				break;
			}
		}
		return ans;
	}
};