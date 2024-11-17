#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	int n, m;
	std::cin >> n >> m;
	std::vector nums(n, std::vector<int> {});
	for (auto& i : nums) {
		std::string s;
		std::cin >> s;

		for (char j : s) {
			i.push_back(j - '0');
		}
	}

	if (n < 4 || nums[0].size() < 4) {
		std::cout << "No\n";
		return;
	}

	std::vector<std::vector<int>> __nums = {
		{0, 0, 0, 0},
		{0, 1, 1, 0},
		{0, 1, 1, 0},
		{0, 0, 0, 0},
	};
	auto temp = [&] (std::vector<std::vector<int>> nums, int u, int k) {
		for (int i = 0; i < __nums.size(); i++) {
			for (int j = 0; j < __nums[i].size(); j++) {
				if (__nums[i][j] != nums[i + u][j + k]) {
					return false;
				}
			}
		}
		return true;
	};

	bool is = false;
	for (int i = 0; i < n - 3; i++) {
		for (int j = 0; j < nums[i].size() - 3; j++) {
			if (temp(nums, i, j) == true) {
				is = true;
			}
		}
	}

	std::cout << (is ? "Yes" : "No") << "\n";
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
