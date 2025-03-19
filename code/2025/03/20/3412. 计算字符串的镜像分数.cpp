class Solution {
public:
	using i64 = long long;
	long long calculateScore(string s) {
		i64 ans = 0;
		std::map<int, std::vector<std::pair<char, int>>> map;
		int n = s.size();
		for (int i = 0; i < n; i++) {
			auto& p = map[make(s[i])];
			if (p.size() != 0) {
				ans += i - p.back().second;
				p.pop_back();
			} else {
				map[s[i]].emplace_back(s[i], i);
			}
		}
		return ans;
	}

	char make(char c) {
		return (25 - (c - 'a')) + 'a';
	}
};