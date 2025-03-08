#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	std::string a, b, c, d, e;
	void solve() {
		std::string s;
		std::cin >> s;
		for (char c : s) {
			push(c);
		}
		std::cout << std::format("{}\n{}\n{}\n{}\n{}", a, b, c, d, e);
	}

	void push(char p) {
		if (p == '0') {
			a += ".....";
			b += ".***.";
			c += ".***.";
			d += ".***.";
			e += ".....";
		} else if (p == '1') {
			a += "****.";
			b += "****.";
			c += "****.";
			d += "****.";
			e += "****.";
		} else if (p == '2') {
			a += ".....";
			b += "****.";
			c += ".....";
			d += ".****";
			e += ".....";
		} else if (p == '3') {
			a += ".....";
			b += "****.";
			c += ".....";
			d += "****.";
			e += ".....";
		}
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
