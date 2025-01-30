#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t, a, b, c, d;
	std::cin >> t >> a >> b >> c >> d;
	if (t == 0) {
		std::cout << a + b;
	} else {
		std::cout << std::max(a - c, 0) + std::max(b - d, 0);
	}
	return 0;
}
