#include <bits/stdc++.h>

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::vector<int> b;
	for (int i = 0; i < n; i++) {
		if (b.size() and (b.back() + 1 == a[i] || b.back() == a[i])) {
			continue;
		}
		b.emplace_back(a[i]);
	}
	std::cout << b.size() << "\n";
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int tt;
	std::cin >> tt;
	while (tt--) {
		solve();
	}
	return 0;
}
