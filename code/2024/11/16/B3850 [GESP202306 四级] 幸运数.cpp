#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	std::string s;
	std::cin >> s;

	int ans = 0;
	int idx = 1;
	for (size_t i = s.size(); i--;) {
		if (idx % 2 == 0) {
			ans += s[i] - '0';
			idx++;
			continue;
		}

		int a = s[i] - '0';
		idx++;
		a *= 7;

		auto update = [] (int a) {
			if (a <= 9) {
				return a;
			}

			auto temp = std::to_string(a);
			int res = 0;
			for (char i : temp) {
				res += i - '0';
			}

			return res;

		};

		do {
			a = update(a);
		} while (a > 9);

		ans += a;
	}

	std::cout << (ans % 8 == 0 && ans > 0 ? "T" : "F") << "\n";
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
