#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using i64 = long long;
	void solve() {
		int n;
		std::cin >> n;
		std::vector<int> s(n), b(n);
		for (int i = 0; i < n; i++) {
			std::cin >> s[i] >> b[i];
		}
		i64 l = 1, r = 0;
		i64 ans = LLONG_MAX;
		auto dfs = [&](auto & self, int i, int p) {
			if (i == n) {
				if (p != 0) {
					ans = std::min(ans, abs(l - r));
				}
				return;
			}
			self(self, i + 1, p);
			l *= s[i], r += b[i];
			self(self, i + 1, p + 1);
			l /= s[i], r -= b[i];
		};
		dfs(dfs, 0, 0);
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
