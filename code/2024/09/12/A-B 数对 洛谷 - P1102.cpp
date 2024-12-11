#include <bits/stdc++.h>
using namespace std;

#define println(...) puts(format(__VA_ARGS__).c_str())
#define int long long int

const static auto init = [] {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return nullptr;
} ();

void solve() {
	int n, c;
	std::cin >> n >> c;
	vector<int> nums(n);
	for (int& i : nums) {
		std::cin >> i;
	}
	ranges::sort(nums);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += upper_bound(nums.begin(), nums.end(), nums[i] - c)
		       - lower_bound(nums.begin(), nums.end(), nums[i] - c);
	}
	std::cout << ans;
}

signed main() {
	solve();
	return 0;
}

/*

2024/12/11 Revise 01.

#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = false;
#define int long long int

void solve() {
	int n, c;
	std::cin >> n >> c;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}

	sort(nums.begin(), nums.end());

	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += std::upper_bound(nums.begin(), nums.end(), c + nums[i])
		       - std::lower_bound(nums.begin(), nums.end(), c + nums[i]);
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