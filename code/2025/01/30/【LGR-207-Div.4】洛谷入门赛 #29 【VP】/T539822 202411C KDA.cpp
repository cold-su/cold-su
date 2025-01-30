#include <bits/stdc++.h>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> f(n);
	for (int i = 0; i < n; i++) {
		int k, d, a;
		scanf("%d/%d/%d", &k, &d, &a);
		int x;
		if (k - d >= 10) {
			x = k * (k - d) + a;
		} else if (k >= d) {
			x = (k - d + 1) * 3 + a;
		} else {
			x = a * 2;
		}
		f[i] = x;
	}
	int max = std::ranges::max(f);
	for (int i = 0; i < n; i++) {
		if (f[i] == max) {
			std::cout << i + 1;
			return 0;
		}
	}
	return 0;
}
