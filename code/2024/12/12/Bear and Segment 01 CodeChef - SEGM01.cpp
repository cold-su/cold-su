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

	int p = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') {
			int j = i;
			while (j < s.size() and s[j] == '1') {
				j++;
			}
			p = j - i;
			break;
		}
	}

	int cnt[2] {};
	for (int i = 0; i < s.size(); i++) {
		cnt[s[i] - '0']++;
	}

	std::cout << (cnt[1] == p and cnt[1] != 0 ? "YES" : "NO") << "\n";
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
