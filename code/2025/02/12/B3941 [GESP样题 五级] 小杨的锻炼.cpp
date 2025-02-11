#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n;
	std::cin >> n;
	int ans = 1;
	while (n--) {
		int x;
		std::cin >> x;
		ans = std::lcm(ans, x);
	}
	std::cout << ans;
	return 0;
}
