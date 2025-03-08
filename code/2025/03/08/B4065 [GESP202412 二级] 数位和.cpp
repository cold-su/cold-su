#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using i64 = long long;
	void solve() {
		int n;
		std::cin >> n;
		i64 ans = 0;
		for (int i = 0; i < n; i++) {
			i64 a;
			std::cin >> a;
			ans = std::max(ans, make(a));
		}
		std::cout << ans;
	}

	i64 make(i64 n) {
		int ans = 0;
		while (n) {
			ans += n % 10;
			n /= 10;
		}
		return ans;
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
