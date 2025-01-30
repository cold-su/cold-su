#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int x, n;
	std::cin >> x >> n;
	int f[5] {};
	while (n--) {
		int a, b, c, d, e;
		std::cin >> a >> b >> c >> d >> e;
		std::vector<int> p;
		for (int y : (int[]) {a, b, c, d, e}) {
			if (y <= x) {
				p.emplace_back(y);
			}
		}
		if (p.size() == 0) {
			continue;
		}
		int max = std::ranges::max(p);
		if (x - max >= 0) {
			f[max - 1]++;
			x -= max;
		}
	}
	for (int i = 0; i < 5; i++) {
		std::cout << f[i] << " \n"[i == 4];
	}
	std::cout << x;
	return 0;
}
