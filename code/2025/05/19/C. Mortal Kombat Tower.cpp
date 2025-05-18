#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::vector<int> a(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		std::vector<int> him(n + 1), us(n + 1);
		for (int i = n; i--;) {
			him[i] = a[i] + us[i + 1];
			if (i + 2 <= n) {
				him[i] = std::min(him[i], a[i] + a[i + 1] + us[i + 2]);
			}
			us[i] = him[i + 1];
			if (i + 2 <= n) {
				us[i] = std::min(us[i], him[i + 2]);
			}
		}
		std::cout << him[0] << "\n";
	}
	return 0;
}
