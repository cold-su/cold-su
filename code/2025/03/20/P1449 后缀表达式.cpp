#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		std::string s;
		std::cin >> s;
		std::vector<int> p;
		int k = 0;
		for (int i = 0, n = s.size(); i < n; i++) {
			if (s[i] == '.') {
				p.push_back(k);
				k = 0;
				continue;
			}
			if ('0' <= s[i] and s[i] <= '9') {
				k *= 10;
				k += s[i] - '0';
				continue;
			}
			if (p.size() >= 2) {
				int b = p.back();
				p.pop_back();
				int a = p.back();
				p.pop_back();
				if (s[i] == '+') {
					p.push_back(a + b);
					continue;
				}
				if (s[i] == '-') {
					p.push_back(a - b);
					continue;
				}
				if (s[i] == '*') {
					p.push_back(a * b);
					continue;
				}
				if (s[i] == '/') {
					p.push_back(a / b);
					continue;
				}
			}
		}
		std::cout << p.back();
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
