#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using P = std::pair<int, int>;
	void solve() {
		int r, w;
		std::cin >> r >> w;
		r = w / r;
		int m, n;
		std::cin >> m  >> n;
		std::vector<int> t(n);
		for (int& x : t) {
			std::cin >> x;
		}
		std::vector<P> p(m);
		for (auto& [a, b] : p) {
			std::cin >> a >> b;
		}
		int T;
		std::cin >> T;
		T++;
		std::vector<int> f(T);
		for (int i = 0; i < m; i++) {
			auto [point, val] = p[i];
			int time = t[point - 1] * r;
			std::vector<int> nf(T);
			for (int j = 0; j < T; j++) {
				nf[j] = f[j];
				if (j >= time) {
					nf[j] = std::max(nf[j], f[j - time] + val);
				}
			}
			f = nf;
		}
		std::cout << f.back();
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
