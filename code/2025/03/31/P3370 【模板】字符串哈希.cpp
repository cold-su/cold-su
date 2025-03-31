#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		std::set<std::string> s;
		while (n--) {
			std::string t;
			std::cin >> t;
			s.insert(t);
		}
		std::cout << s.size();
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
