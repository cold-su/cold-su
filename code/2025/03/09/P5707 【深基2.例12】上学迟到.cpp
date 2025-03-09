#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int s, v;
		std::cin >> s >> v;
		double h = ceil(s / (double) v) + 10;
		int tot = 8 * 60 + 24 * 60;
		tot -= h;
		int p = tot / 60;
		if (p >= 24) {
			int t = p % 24;
			if (t > 10) {
				std::cout << t << ":";
			} else {
				std::cout << "0" << t << ":";
			}
		} else {
			std::cout << p << ":";
		}
		p = tot - p * 60;
		if (p < 10) {
			std::cout << "0" << p;
		} else {
			std::cout << p;
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
