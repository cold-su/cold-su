#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		int f[2] {};
		while (n--) {
			int a;
			std::cin >> a;
			f[a % 2 == 0]++;
		}
		std::cout << f[0] << " " << f[1];
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
