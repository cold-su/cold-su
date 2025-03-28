#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		while (true) {
			int n;
			std::cin >> n;
			if (n == 0) {
				break;
			}
			int m;
			std::cin >> m;
			std::vector<int> fa(n + 1);
			std::iota(fa.begin(), fa.end(), 0);
			int c = n;
			auto find = [&](auto & self, int x) -> int {
				if (x != fa[x]) {
					fa[x] = self(self, fa[x]);
				}
				return fa[x];
			};
			while (m--) {
				int x, y;
				std::cin >> x >> y;
				x = find(find, x), y = find(find, y);
				if (x == y) {
					continue;
				}
				c--;
				fa[x] = y;
			}
			std::cout << c - 1 << '\n';
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
