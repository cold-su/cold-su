#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		std::string t;
		int k;
		std::cin >> t >> k;
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
		while (s.size() > 1 and s.front() == '0') {
			s.pop_front();
		}
		std::cout << std::string(s.begin(), s.end());
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
