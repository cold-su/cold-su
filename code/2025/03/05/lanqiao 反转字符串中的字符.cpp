#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		std::string s;
		getline(std::cin, s);
		std::reverse(s.begin(), s.end());
		std::cout << s;
	}

};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
