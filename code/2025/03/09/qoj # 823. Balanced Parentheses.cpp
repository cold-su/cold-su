#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	std::string solve() {
		std::string s;
		getline(std::cin, s);
		std::vector<char> st;
		std::string yes = "Balanced\n", no = "Not Balanced\n";
		for (char c : s) {
			if (type(c) == "left") {
				st.push_back(c);
			} else if (type(c) == "right") {
				if (st.empty()) {
					return no;
				}
				char h = st.back();
				st.pop_back();
				if (check(h, c) == false) {
					return no;
				}
			}
		}
		return st.empty() ? yes : no;
	}

	std::string type(char c) {
		if (c == '(' or c == '[' or c == '{') {
			return "left";
		}
		if (c == ')' or c == ']' or c == '}') {
			return "right";
		}
		return "-1";
	}

	bool check(char c, char h) {
		auto t = std::format("{}{}", c, h);
		return t == "()" or t == "[]" or t == "{}";
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p {};
	int n;
	std::cin >> n;
	std::string s;
	getline(std::cin, s);
	while (n--) {
		std::cout << p.solve();
	}
	return 0;
}
