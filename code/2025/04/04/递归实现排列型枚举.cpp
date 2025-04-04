#include <bits/stdc++.h>

class Solution {
	std::vector<int> a, p, vis;
	int n;
public:
	Solution() {
		std::cin >> n;
		a.resize(n);
		vis.resize(n);
		std::iota(a.begin(), a.end(), 1);
	}
	void solve() {
		dfs(0);
	}
	void dfs(int i) {
		if (i == n) {
			for (int i = 0; i < n; i++) {
				std::cout << p[i] << " \n"[i == n - 1];
			}
			return;
		}
		for (int j = 0; j < n; j++) {
			if (not vis[j]) {
				vis[j] = true;
				p.push_back(a[j]);
				dfs(i + 1);
				p.pop_back();
				vis[j] = false;
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
