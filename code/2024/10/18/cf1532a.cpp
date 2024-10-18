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
	std::string s;
	std::cin >> s;

	std::vector<std::string> ans;
	int n = s.size();
	for (int i = 0; i < s.size(); i++) {
		char a = s[i];

		n--;
		std::string temp;
		if (a != '0') {
			temp += a;

			for (int j = 0; j < n; j++) {
				temp += '0';
			}
			ans.push_back(temp);
		}

	}

	std::cout << ans.size() << "\n";
	for (auto i : ans) {
		std::cout << i << " ";
	}
	std::cout << "\n";
}

signed main() {
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--) { solve(); }
	} else solve();
	return 0;
}
