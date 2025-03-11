#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using i64 = long long;
	void solve() {
		i64 n, m, k;
		std::cin >> n >> m >> k;
		std::deque<i64> a(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		std::ranges::sort(a);
		i64 l = -k, r = k;
		auto update = [&]() {
			while (not a.empty() and a.front() < l) {
				a.pop_front();
			}
			while (not a.empty() and a.back() > r) {
				a.pop_back();
			}
		};
		while (m--) {
			int op;
			std::cin >> op;
			if (op == 1) {
				i64 x;
				std::cin >> x;
				l -= x, r -= x;
				update();
			} else if (op == 2) {
				i64 x;
				std::cin >> x;
				l += x, r += x;
				update();
			} else {
				std::cout << a.size() << '\n';
			}
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
