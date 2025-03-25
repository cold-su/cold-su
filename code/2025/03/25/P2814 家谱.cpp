#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using str = std::string;
	std::map<str, str> fa;
	void solve() {
		str s, t;
		while (std::cin >> s and s != "$") {
			str k = s.substr(1);
			if (not fa.count(k)) {
				fa[k] = k;
			}
			if (s[0] == '#') {
				t = k;
			} else if (s[0] == '+') {
				merge(k, t);
			} else {
				std::cout << k << " " << find(k) << "\n";
			}
		}
	}

	str find(str x) {
		if (fa[x] != x) {
			fa[x] = find(fa[x]);
		}
		return fa[x];
	}

	void merge(str from, str to) {
		str x = find(from), y = find(to);
		fa[x] = y;
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
