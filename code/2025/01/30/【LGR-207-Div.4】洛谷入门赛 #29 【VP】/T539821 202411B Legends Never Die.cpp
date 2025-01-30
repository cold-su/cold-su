#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int a, b, c;
	std::cin >> a >> b >> c;
	int k;
	std::cin >> k;
	bool f[3] {a + b >= k, a + c >= k, b + c >= k};
	for (bool x : f) {
		std::cout << (x ? "Yes" : "No") << "\n";
	}
	return 0;
}
