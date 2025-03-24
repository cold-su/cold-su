#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	std::vector<int> fa;
	void solve() {
		int n;
		std::cin >> n;
		fa.resize(n + 1);
		std::iota(fa.begin(), fa.end(), 0);
		int m, p;
		std::cin >> m >> p;
		while (m--) {
			int x, y;
			std::cin >> x >> y;
			merge(x, y);
		}
		while (p--) {
			int x, y;
			std::cin >> x >> y;
			std::cout << (is_same(x, y) ? "Yes" : "No") << "\n";
		}
	}

	void merge(int from, int to) {
		int x = find(from), y = find(to);
		if (x == y) {
			return;
		}
		fa[x] = y;
	}

	bool is_same(int x, int y) {
		return find(x) == find(y);
	}

	int find(int x) {
		if (fa[x] != x) {
			fa[x] = find(fa[x]);
		}
		return fa[x];
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
