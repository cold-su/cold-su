#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = true;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}

	int c = 0, p = 0;
	int l = 0, m = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			c += nums[i];
			l++;
		} else {
			p += nums[i];
			m++;
		}
	}

	std::cout << (c % l == 0 and p % m == 0 and c / l == p / m ? "YES" : "NO") << "\n";
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}

/*
#include <bits/stdc++.h>

#define deb(...) std::cerr << std::format(__VA_ARGS__) << "\n";
#ifdef ONLINE_JUDGE
#define deb(...) 0
#endif
const bool HAVE_MULTIPLE_TESTCASES = true;
#define int long long int

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];
	}

	int sum[2] {}, cnt[2] {};
	for (int i = 0; i < n; i++) {
		sum[i % 2] += nums[i];
		cnt[i % 2] += 1;
	}

	if (sum[0] % cnt[0] != 0 || sum[1] % cnt[1] != 0 || sum[0] / cnt[0] != sum[1] / cnt[1]) {
		std::cout << "NO\n";
	} else {
		std::cout << "YES\n";
	}
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}

 */