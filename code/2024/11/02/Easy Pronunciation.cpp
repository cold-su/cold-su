#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
} ();

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	int cnt = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		char a = s[i];
		if (a != 'a' && a != 'e' && a != 'i' && a !='o' && a != 'u') {
			cnt++;
		} else {
			ans = std::max(cnt, ans);
			cnt = 0;
		}
	}

	ans = std::max(cnt, ans);

	std::cout << (ans >= 4 ? "NO" : "YES") << "\n";
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
