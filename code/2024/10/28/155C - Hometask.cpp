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
	std::string s;
	std::cin >> s;

	int n;
	std::cin >> n;

	int ans = 0;
	while (n--) {
		char a, b;
		std::cin >> a >> b;

		int cnt = 0, __cnt = 0;
		for (int i = 0; i < s.size(); i++) {
			char temp = s[i];
			if (temp == a)
				cnt++;
			else if (temp == b)
				__cnt++;
			else {
				ans += std::min(cnt, __cnt);
				cnt = __cnt = 0; 
			}
		}

		ans += std::min(cnt, __cnt);
	}

	std::cout << ans;
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--) { solve(); }
	} else solve();
	return 0;
}
