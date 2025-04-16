class Solution {
public:
	string removeDuplicates(string t, int k) {
		std::deque<std::pair<char, int>> s;
		for (int i = 0, n = t.size(); i < n; i++) {
			if (s.empty() || t[i] != s.back().first) {
				s.push_back({t[i], 1});
			} else {
				s.back().second++;
			}
			while (s.size() and s.back().second == k) {
				s.pop_back();
			}
		}
		std::string ans{};
		while (s.size()) {
			for (int i = 0; i < s.front().second; i++) {
				ans += s.front().first;
			}
			s.pop_front();
		}
		return ans;
	}
};