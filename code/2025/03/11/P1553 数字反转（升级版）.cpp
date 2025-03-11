#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using u64 = unsigned long long;
	void solve() {
		std::string s;
		std::cin >> s;
		auto find = [&](char c) {
			return s.find(c) != std::string::npos;
		};
		auto make = [&](int i, char x) {
			int n = s.size();
			auto t = s.substr(0, i), p = s.substr(std::min(n - 1, i + 1));
			std::cout << rev(t) << x << rev(p);
		};
		if (find('.')) {
			int i = s.find('.');
			make(i, '.');
			return;
		}
		if (find('/')) {
			int i = s.find('/');
			make(i, '/');
			return;
		}
		bool f = false;
		if (f = find('%')) {
			s.pop_back();
		}
		std::cout << rev(s) << " %"[f];
	}

	u64 rev(std::string s) {
		u64 n = std::stoull(s);
		s = std::to_string(n);
		std::reverse(s.begin(), s.end());
		return std::stoull(s);
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
