#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		std::vector<int> a(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		int ans = a[0];
		for (int i = 1; i < n; i++) {
			a[i] = a[i - 1] + a[i] > 0 ? a[i - 1] + a[i] : a[i];
			ans = std::max(a[i], ans);
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
