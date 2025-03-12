#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int a, b, c;
		std::cin >> a >> b >> c;
		std::array<int, 9> p;
		for (int i = 0; i < 9; i++) {
			p[i] = i + 1;
		}
		int cnt = 0;
		do {
			int x = 100 * p[0] + 10 * p[1] + p[2];
			int y = 100 * p[3] + 10 * p[4] + p[5];
			int z = 100 * p[6] + 10 * p[7] + p[8];
			if (1LL * x * b == 1LL * y * a and 1LL * y * c == 1LL * z * b) {
				cnt++;
				std::cout << x << " " << y << " " << z << "\n";
			}
		} while (std::next_permutation(p.begin(), p.end()));
		if (cnt == 0) {
			std::cout << "No!!!";
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
