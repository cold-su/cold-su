#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		std::string s;
		std::cin >> s;
		std::vector<char> st;
		std::vector<int> d;
		int n = s.size();
		for (int i = 0; i < n; i++) {
			char& c = s[i];
			if (c == '(' || c == '[') {
				st.push_back(c);
				d.push_back(i);
			}
			if (c == ')' || c == ']') {
				if (st.empty()) {
					c = mark(c);
					continue;
				}
				if (!check(st.back(), c)) {
					c = mark(c);
				} else {
					st.pop_back();
					d.pop_back();
				}
			}
		}
		for (int x : d) {
			s[x] = mark(s[x]);
		}
		for (char c : s) {
			if (c == 'x' || c == 'X') {
				std::cout << (c == 'x' ? "()" : "[]");
			} else {
				std::cout << c;
			}
		}
	}

	char mark(char c) {
		return c == '(' || c == ')' ? 'x' : 'X';
	}

	bool check(char c, char t) {
		auto s = std::format("{}{}", c, t);
		return s == "()" || s == "[]";
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
