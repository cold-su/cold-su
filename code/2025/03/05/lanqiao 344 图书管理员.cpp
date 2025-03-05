#include <bits/stdc++.h>

class Solution {
	std::vector<std::string> a;
public:
	Solution() {}

	void solve() {
		int n, q;
		std::cin >> n >> q;
		a.resize(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		std::sort(a.begin(), a.end(), [&](auto l, auto r) {
			if (l.size() == r.size()) {
				return l < r;
			}
			return l.size() < r.size();
		});
		while (q--) {
			__solve();
		}
	}

	void __solve() {
		int n = this->a.size(), m;
		std::string s;
		std::cin >> m >> s;
		for (int i = 0; i < n; i++) {
			auto t = a[i];
			if (t.substr(std::max((int) t.size() - m, 0)) == s) {
				std::cout << t << '\n';
				return;
			}
		}
		std::cout << -1 << '\n';
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
