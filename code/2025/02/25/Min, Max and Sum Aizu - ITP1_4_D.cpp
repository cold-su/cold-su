#include <bits/stdc++.h>

class Solution {
public:
	void solve() {
		int n;
		std::cin >> n;
		std::vector<int> a(n);
		int64_t f[3] {INT_MAX, INT_MIN, 0};
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
			f[0] = fmin(f[0], a[i]);
			f[1] = fmax(f[1], a[i]);
			f[2] += a[i];
		}
		for (int i = 0; i < 3; i++) {
			std::cout << f[i] << " \n"[i == 3 - 1];
		}
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution* p;
	p->solve();
	return 0;
}
