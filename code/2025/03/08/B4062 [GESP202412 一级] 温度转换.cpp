#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		double k;
		std::cin >> k;
		double c = k - 273.15;
		double f = c * 1.8 + 32;
		if (f > 212) {
			std::cout << "Temperature is too high!";
			return;
		}
		std::cout << std::fixed << std::setprecision(2);
		std::cout << c << " " << f;
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
