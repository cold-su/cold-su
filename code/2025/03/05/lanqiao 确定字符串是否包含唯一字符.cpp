#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		std::string s;
		std::cin >> s;
		std::map<char, int> map;
		int max = 1;
		for (char c : s) {
			map[c]++;
			max = std::max(max, map[c]);
		}
		std::cout << (max == 1 ? "YES" : "NO");
	}

};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
