#include <bits/stdc++.h>

const bool MULTI = false;
using namespace std;
#define int long long int

void solve() {
	int n;
	cin >> n;
	vector<vector<int> > ans {{1}};
	for (int i = 1; i < n; i++) {
		ans.push_back({});
		for (int j = 0; j <= i; j++) {
			if (j == i or j == 0) {
				ans[i].push_back(1);
			} else {
				ans[i].push_back(ans[i - 1][j] + ans[i - 1][j - 1]);
			}
		}
	}
	for (auto x : ans) {
		int m = x.size();
		for (int i = 0; i < m; i++) {
			cout << x[i] << " \n"[i == m - 1];
		}
	}
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (MULTI) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
