#include <bits/stdc++.h>

#define int long long int

signed main() {
	std::map<std::string, int> map;

	int n;
	std::cin >> n;

	while (n--) {
		std::string s;
		std::cin >> s;

		map[s]++;
	}

	std::cout << 52 - map.size();

	return 0;
}
