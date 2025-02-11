#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m;
	std::cin >> n >> m;
	std::vector<int> c(n), a(m);
	for (int i = 0; i < n; i++) {
		std::cin >> c[i];
	}
	for (int i = 0; i < m; i++) {
		std::cin >> a[i];
	}
	std::ranges::sort(c);
	for (int i = 0; i < m; i++) {
		if (a[i] < 0) {
			c.front() += a[i];
		} else {
			c.back() += a[i];
		}
	}
	std::cout << c.back();
	return 0;
}
