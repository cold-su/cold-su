#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int& i : nums) {
		std::cin >> i;
	}

	int sum = std::accumulate(nums.begin(), nums.end(), 0);
	auto __sum = sum;
	for (int i : nums) {
		sum -= i;
		if (__sum - sum == sum) {
			std::cout << "Yes\n";
			return;
		}
	}

	std::cout << "No\n";
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
