#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		std::vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			std::cin >> b[i];
		}
		std::vector<int> c;
		for (int i = 0, j = 0; i < n; i++) {
			c.push_back(a[i]);
			while (not c.empty() and j < n and c.back() == b[j]) {
				j++;
				c.pop_back();
			}
		}
		std::cout << (c.empty() ? "Yes" : "No") << "\n";
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	int t;
	std::cin >> t;
	while (t--) {
		p.solve();
	}
	return 0;
}
