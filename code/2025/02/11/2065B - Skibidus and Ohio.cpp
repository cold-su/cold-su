#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		int ans = s.size();
		for (int i = 0, j = 1; j < s.size(); i++, j++) {
			if (s[i] == s[j]) {
				ans = 1;
				break;
			}
		}
		std::cout << ans << "\n";
	}
	return 0;
}
