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
		std::ranges::sort(a);
		while (a.size() != 1) {
			int x = a.back();
			a.pop_back();
			x += a.back() - 1;
			a.pop_back();
			a.push_back(x);
		}
		std::cout << a.back() << "\n";
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
