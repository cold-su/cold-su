#include <bits/stdc++.h>

void solve() {
	int n;
	std::cin >> n;

	std::vector<std::tuple<std::string, int, int> > v;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		std::string s;
		int a, b;
		char c, d;
		int e;
		std::cin >> s >> a >> b >> c >> d >> e;

		int sum = 0;
		if (a > 80 and e >= 1) {
			sum += 8000;
		}
		if (a > 85 and b > 80) {
			sum += 4000;
		}
		if (a > 90) {
			sum += 2000;
		}
		if (a > 85 and d == 'Y') {
			sum += 1000;
		}
		if (b > 80 and c == 'Y') {
			sum += 850;
		}

		v.emplace_back(s, sum, i);
		ans += sum;
	}

	std::sort(v.begin(), v.end(), [] (auto a, auto b) {
		auto [_, l, r] = a;
		auto [__, _l, _r] = b;
		if (l == _l) {
			return r < _r;
		}
		return l > _l;
	});
	auto [a, b, c] = v[0];
	std::cout << std::format("{}\n{}\n", a, b);
	std::cout << ans;
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	solve();

	return 0;
}
