#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using u64 = unsigned long long;
	void solve() {
		int x, n;
		std::cin >> x >> n;
		u64 ans = 1;
		for (int i = 0; i < n; i++) {
			ans += ans * x;
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
