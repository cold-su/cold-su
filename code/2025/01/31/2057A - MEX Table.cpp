#include <bits/stdc++.h>

void solve() {
	int a, b;
	std::cin >> a >> b;
	std::cout << (1 + std::max(a, b)) << "\n";
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n;
	std::cin >> n;
	while (n--) {
		solve();
	}
	return 0;
}
