#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n, m;
		std::cin >> n >> m;
		int c = n;
		n++;
		std::map<int, std::vector<int>> map;
		std::vector<int> fa(n), e(n);
		std::iota(fa.begin(), fa.end(), 0);
		auto find = [&](auto & self, int x) -> int {
			if (x != fa[x]) {
				fa[x] = self(self, fa[x]);
			}
			return fa[x];
		};
		auto merge = [&](int x, int y) {
			x = find(find, x), y = find(find, y);
			if (x == y) {

			} else {
				fa[x] = y;
				c--;
			}
		};
		while (m--) {
			char p;
			int x, y;
			std::cin >> p >> x >> y;
			if (p == 'E') {
				if (e[x] != 0) {
					merge(y, e[x]);
				}
				e[x] = find(find, y);
				if (e[y] != 0) {
					merge(x, e[y]);
				}
				e[y] = find(find, x);
			} else {
				merge(x, y);
			}
		}
		std::cout << c;
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
