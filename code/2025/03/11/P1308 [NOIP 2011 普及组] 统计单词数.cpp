#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		std::string t;
		getline(std::cin, t);
		std::string s;
		getline(std::cin, s);
		std::vector<std::string> w;
		auto div = [&]() -> void {
			int n = s.size();
			std::string p {};
			for (int i = 0; i < n; i++) {
				if (s[i] == ' ' or s[i] == '\n') {
					w.push_back(p);
					p = "";
				} else {
					p += s[i];
				}
			}
			w.push_back(p);
		};
		div();
		auto is_same = [&](std::string s, std::string t) -> bool {
			auto to_lower = [&](char& c) -> void {
				c |= 32;
			};
			for (char& c : s) {
				to_lower(c);
			}
			for (char& c : t) {
				to_lower(c);
			}
			return s == t;
		};
		int ans = 0;
		int i = 0, idx = 0;
		bool found = false;
		for (auto& p : w) {
			bool ok = is_same(t, p);
			ans += ok;
			if (ok and not found) {
				idx = i;
				found = true;
			}
			i += p.size() + 1;
		}
		if (ans == 0) {
			std::cout << -1;
		} else {
			std::cout << ans << " " << idx;
		}
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
