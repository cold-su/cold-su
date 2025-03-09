#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	struct u {
		std::string s;
		int a, b, c, tot;
	};

	void solve() {
		int n;
		std::cin >> n;
		std::vector<u> a(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i].s >> a[i].a >> a[i].b >> a[i].c;
			a[i].tot = a[i].a + a[i].b + a[i].c;
		}
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				auto s = compare(a[i], a[j]);
				if (s != "-1") {
					std::cout << s;
				}
			}
		}
	}

	std::string compare(u a, u b) {
		if (abs(a.tot - b.tot) <= 10 and abs(a.a - b.a) <= 5 and abs(a.b - b.b) <= 5 and abs(a.c - b.c) <= 5) {
			if (a.s > b.s) {
				std::swap(a.s, b.s);
			}
			return std::format("{} {}\n", a.s, b.s);
		} else {
			return "-1";
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
