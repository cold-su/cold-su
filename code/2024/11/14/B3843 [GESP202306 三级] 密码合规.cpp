#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	std::string s;
	getline(std::cin, s);

	int cnt = 0;
	bool up = false;
	bool low = false;
	bool num = false;
	bool spec = false;

	std::string temp;
	for (int i = 0; i < s.size(); i++) {
		char a = s[i];
		if (a == ',') {
			if (6 <= cnt && cnt <= 12 && up + low + num >= 2 && spec) {
				std::cout << temp << "\n";
			}

			cnt = 0;
			up = false;
			low = false;
			num = false;
			spec = false;
			temp = "";
			continue;
		} else {
			cnt++;

			if ('A' <= a && a <= 'Z') {
				up = true;
			}

			if ('a' <= a && a <= 'z') {
				low = true;
			}

			if ('0' <= a && a <= '9') {
				num = true;
			}

			if (a == '!' || a == '@' || a == '#' || a == '$') {
				spec = true;
			}
		}

		temp += a;
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
