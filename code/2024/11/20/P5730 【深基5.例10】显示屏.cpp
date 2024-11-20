#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n;
	std::cin >> n;

	std::vector<std::vector<std::string>> ans(5);

	auto push = [&] (std::string s) {
		std::string temp = "";
		int idx = 0;
		for (int i = 0; i < s.size(); i++) {
			if (i % 3 == 0 && i != 0) {
				ans[idx].push_back(temp);
				idx++;
				temp = "";
			}
			temp += s[i];
		}
		ans[4].push_back(temp);
	};

	auto __push = [&] (std::string s) {
		std::string temp = "";
		int idx = 0;
		for (int i = 0; i < s.size(); i++) {
			temp += s[i];
			ans[idx].push_back(temp);
			idx++;
			temp = "";
		}
	};

	while (n--) {
		char a;
		std::cin >> a;

		if (a == '0') {
			push("XXXX.XX.XX.XXXX");
		} else if (a == '1') {
			push("..X..X..X..X..X");
		} else if (a == '2') {
			push("XXX..XXXXX..XXX");
		} else if (a == '3') {
			push("XXX..XXXX..XXXX");
		} else if (a == '4') {
			push("X.XX.XXXX..X..X");
		} else if (a == '5') {
			push("XXXX..XXX..XXXX");
		} else if (a == '6') {
			push("XXXX..XXXX.XXXX");
		} else if (a == '7') {
			push("XXX..X..X..X..X");
		} else if (a == '8') {
			push("XXXX.XXXXX.XXXX");
		} else if (a == '9') {
			push("XXXX.XXXX..XXXX");
		}

		if (n >= 1) {
			__push(".....");
		}
	}

	for (auto i : ans) {
		for (auto j : i) {
			std::cout << j;
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
