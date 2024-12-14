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
		int a, b, c;
		std::cin >> a >> b >> c;

		std::vector<int> nums {a, b, c};
		sort(nums.begin(), nums.end());

		bool is = pow(nums[0], 2) + pow(nums[1], 2) == pow(nums[2], 2);


		std::cout << "Case " << i + 1 << ": " << (is ? "yes" : "no") << "\n";

	}

	return 0;
}
