#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

void solve() {
	std::string s;
	std::cin >> s;

	int n = s.size();

	std::set<int> set;

	auto temp = [&] (int i) {
		if (s.substr(i, 4) == "1100") {
			set.insert(i);
		} else {
			set.erase(i);
		}
	};

	for (int i = 0; i < std::min(n, i + 4); i++) {
		temp(i);
	}

	int q;
	std::cin >> q;

	while (q--) {
		int i;
		char d;
		std::cin >> i >> d;
		i--;

		s[i] = d;

		for (int j = std::max((int) 0, i - 3); j <= i; j++) {
			temp(j);
		}

		println("{}", set.empty() ? "NO" : "YES");
	}
}

void solve() {
	std::string s;
	std::cin >> s;

	int q;
	std::cin >> q;

	int n = s.size();

	int ans = 0;
	for (int i = 0; i < n - 3; i++) {
		ans += s.substr(i, 4) == "1100";
	}

	for (int i = 0; i < q; i++) {
		int p;
		char v;
		std::cin >> p >> v;
		p--;

		for (int j = std::max(0, p - 3); j <= std::min(p, n - 4); j++) {
			ans -= s.substr(j, 4) == "1100";
		}
		s[p] = v;
		for (int j = std::max(0, p - 3); j <= std::min(p, n - 4); j++) {
			ans += s.substr(j, 4) == "1100";
		}
		std::cout << (ans ? "YES" : "NO") << "\n";
	}
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
