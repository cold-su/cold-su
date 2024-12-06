#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

const static auto init = [] {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return nullptr;
}();

void solve() {
	int n;
	std::cin >> n;
	vector<int> res(65535), dp(65535, 1);
	for (int i = 1; i <= n; i++) {
		std::cin >> res[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (res[j] < res[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	std::cout << *max_element(1 + dp.begin(), 1 + dp.begin() + n);
}

int main() {
	solve();
	return 0;
}

/*

2024 / 12 / 06

 */

/*
#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}

	std::vector<int> dp(n);

	int ans = INT_MIN;
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (nums[j] < nums[i]) {
				dp[i] = std::max(dp[i], dp[j] + 1);
			}
		}

		ans = std::max(ans, dp[i]);
	}

	std::cout << ans;
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}

 */