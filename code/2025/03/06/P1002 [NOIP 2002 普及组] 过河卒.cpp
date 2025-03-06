#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	std::vector<std::pair<int, int>> a;
	using int64 = long long;

	void solve() {
		int xb, yb, xh, yh;
		std::cin >> xb >> yb >> xh >> yh;
		push(xh, yh);
		xb++, yb++, xh++, yh++;
		std::vector<int64> f(yb);
		f[0] = 1;
		for (int i = 0; i < xb; i++) {
			std::vector<int64> nf(yb);
			for (int j = 0; j < yb; j++) {
				if (on(i, j)) {
					nf[j] = 0;
				} else {
					nf[j] = f[j];
					if (j) {
						nf[j] += nf[j - 1];
					}
				}
			}
			f = nf;
		}
		std::cout << f.back();
	}

	void push(int xh, int yh) {
		a.emplace_back(xh - 2, yh - 1);
		a.emplace_back(xh - 2, yh + 1);
		a.emplace_back(xh + 2, yh - 1);
		a.emplace_back(xh + 2, yh + 1);
		a.emplace_back(xh - 1, yh - 2);
		a.emplace_back(xh - 1, yh + 2);
		a.emplace_back(xh + 1, yh - 2);
		a.emplace_back(xh + 1, yh + 2);
		a.emplace_back(xh, yh);
	}

	bool on(int x, int y) {
		for (auto [i, j] : a) {
			if (i == x and j == y) {
				return true;
			}
		}
		return false;
	}

};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
