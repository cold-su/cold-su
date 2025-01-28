#include <bits/stdc++.h>

void solve() {
	int n;
	std::cin >> n;
	std::vector<std::string> a;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		a.emplace_back(s);
	}
	std::sort(a.begin(), a.end(), [] (auto s, auto t) {
		return s + t > t + s;
	});
	for (auto x : a) {
		std::cout << x;
	}
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
