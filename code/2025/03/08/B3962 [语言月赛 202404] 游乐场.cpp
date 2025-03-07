#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int p = 0, cnt = 0;
		int n;
		std::cin >> n;
		std::vector<int> a(n);
		int cur = 0;
		for (int& x : a) {
			std::cin >> x;
			p = std::min(50, p + x - cur);
			cur = x;
			while (p >= 8) {
				p -= 8;
				cnt++;
			}
		}
		std::cout << cnt;
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
