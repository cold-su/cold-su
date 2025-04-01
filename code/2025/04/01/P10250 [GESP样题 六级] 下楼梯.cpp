#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		using i64 = long long;
		std::vector<i64> a {1};
		for (int i = 1; i <= n; i++) {
			i64 p = 0;
			if (i - 1 >= 0) {
				p += a[i - 1];
			}
			if (i - 2 >= 0) {
				p += a[i - 2];
			}
			if (i - 3 >= 0) {
				p += a[i - 3];
			}
			a.push_back(p);
		}
		std::cout << a.back();
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
