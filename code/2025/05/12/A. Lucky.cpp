#include <bits/stdc++.h>

int
main(void)
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5]) {
			std::cout << "YES\n";
		} else {
			std::cout << "NO\n";
		}
	}
	return 0;
}
