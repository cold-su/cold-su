#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	std::vector<int> s;
	void solve() {
		std::string p;
		std::cin >> p;
		if (p == "push") {
			int x;
			std::cin >> x;
			s.push_back(x);
		} else if (p == "pop") {
			if (not s.empty()) {
				s.pop_back();
			}
		} else if (p == "empty") {
			std::cout << (s.empty() ? "YES" : "NO") << "\n";
		} else {
			if (s.empty()) {
				std::cout << "empty";
			} else {
				std::cout << s.back();
			}
			std::cout << "\n";
		}
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	int m;
	std::cin >> m;
	while (m--) {
		p.solve();
	}
	return 0;
}
