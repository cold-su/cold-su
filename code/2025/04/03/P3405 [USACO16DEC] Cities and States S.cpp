#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		// MIFL == FLMI
		// ans += count(FLMI)
		// insert(MIFL)
		int n;
		std::cin >> n;
		std::map<std::string, int> map;
		int ans = 0;
		while (n--) {
			std::string s, t;
			std::cin >> s >> t;
			auto A = std::format("{}{}", s.substr(0, 2), t),
			     B = std::format("{}{}", t, s.substr(0, 2));
			if (A != B) {
				ans += map[B];
			}
			map[A]++;
		}
		std::cout << ans;
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
