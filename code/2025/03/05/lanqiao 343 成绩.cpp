#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int a, b, c;
		std::cin >> a >> b >> c;
		std::cout << a * 0.2 + b * 0.3 + c * 0.5;
	}

};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
