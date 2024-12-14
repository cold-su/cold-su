#include <iostream>

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	while (std::cin >> n && n != 0) {
		int cnt[101] {};
		while (n--) {
			int a;
			std::cin >> a;

			cnt[a]++;
		}

		int q;
		std::cin >> q;

		std::cout << cnt[q] << "\n";
	}

	return 0;
}
