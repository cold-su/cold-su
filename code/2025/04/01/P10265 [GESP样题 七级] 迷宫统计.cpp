#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n, m;
		std::cin >> n >> m;
		m--;
		int a = 0, b = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int k;
				std::cin >> k;
				a += i == m and k;
				b += j == m and k;
			}
		}
		std::cout << a << " " << b << " " << a + b;
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
