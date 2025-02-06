#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string s, t;
	std::cin >> s >> t;
	std::reverse(s.begin(), s.end());
	std::reverse(t.begin(), t.end());
	if (s.substr(0, 12) == t.substr(0, 12)) {
		std::cout << "YES";
	} else {
		std::cout << "NO";
	}

	return 0;
}
