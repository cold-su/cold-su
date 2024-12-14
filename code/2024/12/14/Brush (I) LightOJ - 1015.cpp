#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
#define int long long int

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		std::cin >> n;
		std::vector<int> nums(n);

		int ans = 0;
		for (int& i : nums) {
			std::cin >> i;

			if (i > 0) {
				ans += i;
			}
		}

		std::cout << "Case " << i + 1 << ": " << ans << "\n";

	}

	return 0;
}
