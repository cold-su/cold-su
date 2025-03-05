#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		std::vector f(11, std::vector<long long> (2023));
		for (int i = 0; i <= 2022; i++) {
			std::vector nf(11, std::vector<long long> (2023));
			f[0][0] = nf[0][0] = 1;
			for (int j = 1; j <= 10; j++) {
				for (int k = 1; k <= 2022; k++) {
					if (k >= i) {
						nf[j][k] = f[j][k] + f[j - 1][k - i];
					} else {
						nf[j][k] = f[j][k];
					}
				}
			}
			f = nf;
		}
		std::cout << f[10][2022];
	}

};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
