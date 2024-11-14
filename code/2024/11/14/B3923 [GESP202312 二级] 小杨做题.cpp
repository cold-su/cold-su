#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int a, b, m, n;
	std::cin >> a >> b >> m >> n;

	std::vector<int> nums(2);
	nums[0] = a;
	nums[1] = b;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int n = nums.size();
		if (i >= 2) {
			nums.push_back(nums[n - 1] + nums[n - 2]);
		}
		sum += nums[i];
		if (nums[i] >= m) {
			break;
		}
	}

	std::cout << sum;
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
