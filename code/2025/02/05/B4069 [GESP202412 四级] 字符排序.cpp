#include <bits/stdc++.h>

void solve() {
	int n;
	std::cin >> n;
	std::vector<std::string> p;
	while (n--) {
		std::string a;
		std::cin >> a;
		p.push_back(a);
	}
	std::ranges::sort(p);
	std::string s;
	for (auto t : p) {
		s += t;
	}
	for (int i = 0; i + 1 < s.size(); i++) {
		if (s[i] > s[i + 1]) {
			std::cout << "0\n";
			return;
		}
	}
	std::cout << "1\n";
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int t;
	std::cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
