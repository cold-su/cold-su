#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;

	std::vector nums(n, std::vector<int>(n));
	n--;
	nums[0][n / 2] = 1;

	std::pair<size_t, size_t> prev = {0, n / 2};
	for (int i = 2; i <= (n + 1) * (n + 1); i++) {
		auto [u, k] = prev;

		if (u == 0) {
			u = n;
		} else {
			u--;
		}

		if (k == n) {
			k = 0;
		} else {
			k++;
			k %= n + 1;
		}

		if (nums[u][k] == 0) {
			nums[u][k] = i;
			prev = {u, k};
		} else {
			auto [u, k] = prev;

			u = (u + 1) % (n + 1);

			nums[u][k] = i;

			prev = {u, k};
		}
	}

	for (auto i : nums) {
		for (int j : i) {
			std::cout << j << " ";
		}
		std::cout << "\n";
	}
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
