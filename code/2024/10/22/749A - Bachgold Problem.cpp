#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;

	std::vector<int> nums(n / 2 - 1, 2);
	std::cout << nums.size() + 1 << "\n";
	for (int i : nums) {
		std::cout << i << " ";
	}
	if (n % 2 == 1) {
		std::cout << 3;
	} else {
		std::cout << 2;
	}
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--) { solve(); }
	} else solve();
	return 0;
}
