#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using i64 = long long;
	void solve() {
		int n, k;
		std::cin >> n >> k;
		std::vector<int> a(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		i64 p = 0, ans = 0;
		auto dfs = [&](auto & self, int i, int t) {
			if (t == k) {
				ans += is_prime(p);
				return;
			}
			if (i == n) {
				return;
			}
			self(self, i + 1, t);
			p += a[i];
			self(self, i + 1, t + 1);
			p -= a[i];
		};
		dfs(dfs, 0, 0);
		std::cout << ans;
	}

	bool is_prime(int num) {
		for (int i = 2; i <= sqrt(num); i++) {
			if (num % i == 0)
				return false;
		}
		return num < 2 ? false : true;
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
