#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	std::string s;
	std::cin >> s;

	auto temp = [] (std::string s) {
		std::vector<int> nums, __nums;
		for (char i : s) {
			nums.push_back(i - '0');
			__nums.push_back(i - '0');
		}

		std::sort(nums.begin(), nums.end());
		std::sort(__nums.rbegin(), __nums.rend());

		std::string max, min;
		for (char i : nums) {
			min += i + '0';
		}
		for (char i : __nums) {
			max += i + '0';
		}

		return std::stoi(max) - std::stoi(min);
	};

	int cnt = 1;

	while (temp(s) != 495) {
		s = std::to_string(temp(s));
		cnt++;
	}

	std::cout << cnt;
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
