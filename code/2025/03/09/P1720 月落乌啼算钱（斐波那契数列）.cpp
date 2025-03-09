#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using i64 = long long;
	void solve() {
		int n;
		std::cin >> n;
		i64 f[2] {0, 1};
		for (int i = 2; i <= n; i++) {
			f[i % 2] = f[0] + f[1];
		}
		std::cout << f[n % 2] << ".00";
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
