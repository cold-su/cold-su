#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	int q;
	std::cin >> q;
	std::vector<int> p;
	while (q--) {
		int x;
		std::cin >> x;
		p.push_back(a[x]);
		int m = p.size(), cnt = 0;
		for (int i = 0; i < m; i++) {
			for (int j = i + 1; j < m; j++) {
				if (p[i] > p[j]) {
					std::swap(p[i], p[j]);
					cnt++;
				}
			}
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
