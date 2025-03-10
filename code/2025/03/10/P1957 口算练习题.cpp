#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using i64 = long long;
	void solve() {
		int n;
		std::cin >> n;
		std::string op;
		for (int i = 0; i < n; i++) {
			auto bak = op;
			std::cin >> op;
			auto make = [&](std::string s, std::string t) -> void {
				int a = std::stoi(s), b = std::stoi(t);
				i64 ans;
				if (op == "a") {
					ans = a + b;
				} else if (op == "b") {
					ans = a - b;
				} else {
					ans = a * b;
				}
				auto p = std::format("{}{}{}={}", a, op == "a" || op == "b" ? op == "a" ? "+" : "-" : "*", b, ans);
				std::cout << p << "\n" << p.size() << "\n";
			};
			std::string a, b;
			if (op.size() != 1) {
				a = op;
				op = bak;
				std::cin >> b;
				make(a, b);
			} else {
				std::cin >> a >> b;
				make(a, b);
			}
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
