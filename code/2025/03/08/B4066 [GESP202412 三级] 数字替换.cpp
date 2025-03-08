#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n, k;
		std::cin >> n >> k;
		std::vector<int> a(n);
		int max = INT_MIN, min = INT_MAX;
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
			max = std::max(max, a[i]);
			min = std::min(min, a[i]);
		}
		for (int i = 0; i < n; i++) {
			std::cout << (a[i] <= k ? a[i] == k ? k : min : max) << " \n"[i == n - 1];
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
