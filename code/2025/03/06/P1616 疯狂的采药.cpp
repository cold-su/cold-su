#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int t, n;
		std::cin >> t >> n;
		std::vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i] >> b[i];
		}
		t++;
		std::vector<long long> f(t);
		for (int i = 0; i < n; i++) {
			for (int j = 1; j < t; j++) {
				if (j - a[i] >= 0) {
					f[j] = std::max(f[j], f[j - a[i]] + b[i]);
				}
			}
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
