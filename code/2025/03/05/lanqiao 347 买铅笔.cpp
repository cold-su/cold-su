#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		int ans = INT_MAX;
		for (int i = 0; i < 3; i++) {
			int a, b;
			std::cin >> a >> b;
			int p = ceil(n / (double) a);
			ans = std::min(ans, p * b);
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
