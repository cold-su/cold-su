#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int l;
		std::cin >> l;
		int ans = 0;
		auto is = generate_primes(l);
		for (int i = 2; i <= l; i++) {
			if (is[i]) {
				std::cout << i << "\n";
				ans++;
				l -= i;
			}
			if (l <= 0) {
				break;
			}
		}
		std::cout << ans;
	}

	std::vector<bool> generate_primes(int n) {
		std::vector<bool> res(n + 1);
		std::fill(res.begin(), res.end(), true);
		res[0] = res[1] = false;
		for (int i = 2; i < sqrt(n); i++) {
			if (res[i]) {
				for (int j = i * i; j <= n; j += i) {
					res[j] = false;
				}
			}
		}
		return res;
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
