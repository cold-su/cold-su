#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	std::string s;
	std::cin >> s;

	int num = std::stoi(s);

	int sum = 0;
	for (char i : s) {
		sum += pow((i - '0'), s.size());
	}

	std::cout << (sum == num ? "T" : "F") << "\n";
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
