#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	std::vector<int> nums = {0, a, b, c, d, e, 0};

	int sum = std::accumulate(nums.begin(), nums.end(), 0);

	for (int i = 1; i < nums.size() - 1; i++) {
		nums[i] /= 3;
		nums[i - 1] += nums[i];
		if (i == 1) {
			nums[5] += nums[0];
		}
		nums[i + 1] += nums[i];
		if (i == 5) {
			nums[1] += nums[6];
		}
	}

	int __sum = 0;
	for (int i = 1; i < nums.size() - 1; i++) {
		std::cout << nums[i] << " ";
		__sum += nums[i];
	}

	std::cout << "\n";
	std::cout << sum - __sum;
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
