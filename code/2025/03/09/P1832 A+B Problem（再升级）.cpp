#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	using i64 = long long;
	void solve() {
		int n;
		std::cin >> n;
		auto is = generate_primes(n);
		std::vector<i64> f(n + 1);
		f[0] = 1;
		for (int i = 0; i <= n; i++) {
			for (int j = 2; j <= n; j++) {
				if (j >= i and is[i]) {
					f[j] += f[j - i];
				}
			}
		}
		std::cout << f.back();
	}

	std::vector<bool> generate_primes(int n) {
		std::vector<bool> is(n + 1);
		std::fill(is.begin(), is.end(), true);
		is[0] = false;
		is[1] = false;
		for (int i = 2; i < sqrt(n); i++) {
			if (is[i]) {
				for (int j = i * i; j <= n; j += i) {
					is[j] = false;
				}
			}
		}
		return is;
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
