#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;
// A 65
// Z 90
void solve() {
	int n;
	std::cin >> n;
	auto temp = [] (int num) {
		int res = num % 26;
		return res + 'A';
	};
	for (int i = 0; i < n; i++) {
		for (int j = i; j < i + n; j++) {
			std::cout << char(temp(j));
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
