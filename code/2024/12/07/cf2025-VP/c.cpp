#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = true;
#define int long long int

void solve() {
	std::string s;
	std::cin >> s;

	int a = 0, b = 0;
	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		auto& p = s[i];
		if (p == '2') {
			a++;
		} else if (p == '3') {
			b++;
		}

		sum += p - '0';
	}

	for (int i = 0; i <= std::min(a, 9LL); i++) {
		for (int j = 0; j <= std::min(b, 3LL); j++) {
			if ((sum + i * 2 + j * 6) % 9 == 0) {
				std::cout << "YES\n";
				return;
			}
		}
	}

	std::cout << "NO\n";
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
