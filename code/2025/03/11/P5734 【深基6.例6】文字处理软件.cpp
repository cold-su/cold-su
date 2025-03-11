#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int q;
		std::string s;
		std::cin >> q >> s;
		while (q--) {
			int op;
			std::cin >> op;
			if (op == 1) {
				std::string t;
				std::cin >> t;
				s += t;
				std::cout << s;
			} else if (op == 2) {
				int a, b;
				std::cin >> a >> b;
				s = s.substr(a, b);
				std::cout << s;
			} else if (op == 3) {
				int a;
				std::string t;
				std::cin >> a >> t;
				auto p = s.substr(0, a);
				p += t;
				p += s.substr(a);
				s = p;
				std::cout << s;
			} else if (op == 4) {
				std::string t;
				std::cin >> t;
				if (s.find(t) == std::string::npos) {
					std::cout << -1;
				} else {
					std::cout << s.find(t);
				}
			}
			std::cout << '\n';
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
