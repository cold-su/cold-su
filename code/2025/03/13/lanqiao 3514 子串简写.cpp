#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using i64 = long long;
	void solve() {
		int k;
		std::string s;
		char a, b;
		std::cin >> k >> s >> a >> b;
		int n = s.size();
		i64 ans = 0;
		for (int i = 0, cnt = 0; i + k - 1 < n; i++) {
			cnt += s[i] == a;
			if (s[i + k - 1] == b) {
				ans += cnt;
			}
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
