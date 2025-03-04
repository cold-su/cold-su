#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n, v;
		std::cin >> n >> v;
		std::vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i] >> b[i];
		}
		std::cout << bag(a, b, v);
	}

	int bag(std::vector<int> w, std::vector<int> v, int W) {
		int n = w.size();
		std::vector<int> f(W + 1);
		for (int i = 0; i <= n; i++) {
			std::vector<int> nf(W + 1);
			for (int j = 0; j <= W; j++) {
				if (j < w[i]) {
					nf[j] = f[j];
				} else {
					nf[j] = std::max(f[j], f[j - w[i]] + v[i]);
				}
			}
			f = nf;
		}
		return f.back();
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
