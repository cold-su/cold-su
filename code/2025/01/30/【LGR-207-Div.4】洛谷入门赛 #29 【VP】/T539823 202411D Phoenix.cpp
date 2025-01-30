#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n;
	std::cin >> n;
	std::vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		b[i] = std::max(b[i], a[n - i - 1]);
		if (i >= 1) {
			b[i] = std::max(b[i], b[i - 1]);
		}
	}
	int ans = 1;
	for (int i = 0; i < n - 1; i++) {
		ans += a[i] > b[n - i - 2];
	}
	// for (int x : b) {
	// 	std::cerr << x << " ";
	// }
	std::cout << ans;
	return 0;
}
