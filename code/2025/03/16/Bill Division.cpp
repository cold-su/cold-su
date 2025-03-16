#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n, k;
		std::cin >> n >> k;
		std::vector<int> a(n);
		int sum = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
			sum += a[i];
		}
		int t;
		std::cin >> t;
		sum -= a[k];
		int p = sum / 2;
		int ans = abs(p - t);
		if (ans == 0) {
			std::cout << "Bon Appetit";
		} else {
			std::cout << ans;
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
