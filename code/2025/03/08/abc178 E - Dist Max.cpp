#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using i64 = long long;
	void solve() {
		int n;
		std::cin >> n;
		std::vector<std::array<int, 2>> p(n);
		for (int i = 0; i < n; i++) {
			std::cin >> p[i][0] >> p[i][1];
		}
		int d = 2;
		i64 ans = 0;
		for (int msk = 0; msk < (1 << d); msk++) {
			i64 max = LLONG_MIN, min = LLONG_MAX;
			for (int i = 0; i < n; i++) {
				i64 cur = 0;
				for (int j = 0; j < d; j++) {
					if (msk & (1 << j)) {
						cur += p[i][j];
					} else {
						cur -= p[i][j];
					}
				}
				max = std::max(max, cur);
				min = std::min(min, cur);
			}
			ans = std::max(ans, max - min);
		}
		std::cout << ans;
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
