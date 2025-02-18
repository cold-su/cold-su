#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n, m;
	std::cin >> n >> m;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::ranges::sort(a);
	int ans = INT_MAX;
	for (int i = 0; i + m - 1 < n; i++) {
		ans = std::min(ans, a[i + m - 1] - a[i]);
	}
	std::cout << ans;
	return 0;
}
