#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;
	std::vector<std::pair<int, int>> nums(n);
	for (int i = 0; i < n; i++) {
		auto& [a, b] = nums[i];
		std::cin >> a;
		b = i + 1;
	}

	std::sort(nums.begin(), nums.end(), [] (const auto a, const auto b) {
		return a.first < b.first;
	});

	for (int i = 0; i < n; i++) {
		std::cout << nums[i].second << " \n"[i == n - 1];
	}

	int acc = 0;
	for (int i = 0; i < n; i++) {
		acc += nums[i].first * (n - 1 - i);
	}

	std::cout << std::fixed << std::setprecision(2);
	std::cout << acc / (double) n;
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
