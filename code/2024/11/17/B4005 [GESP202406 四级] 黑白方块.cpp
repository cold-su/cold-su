#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
	int n, m;
	std::cin >> n >> m;
	std::vector nums(n, std::vector<int> {});
	for (auto& i : nums) {
		std::string s;
		std::cin >> s;

		for (char j : s) {
			i.push_back(j - '0');
		}
	}

	std::vector<std::vector<std::vector<int>>> temp;

	auto push = [&] (int u, int k, int h, int w) {
		std::vector __temp(h, std::vector<int>(w));
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				__temp[i][j] = nums[i + u][j + k];
			}
		}

		temp.push_back(__temp);
	};

	auto scan = [&] (int h, int w) {
		for (int i = 0; i <= n - h; i++) {
			for (int j = 0; j <= m - w; j++) {
				push(i, j, h, w);
			}
		}
	};

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scan(i, j);
		}
	}

	int ans = 0;
	for (int i = 0; i < temp.size(); i++) {
		int n = temp[i].size();
		int __n = temp[i][0].size();
		int __ans = n * __n;

		int cnt = 0, __cnt = 0;
		for (int j = 0; j < temp[i].size(); j++) {
			for (int k = 0; k < temp[i][j].size(); k++) {
				cnt += temp[i][j][k] == 0;
				__cnt += temp[i][j][k] == 1;
			}
		}

		if (cnt == __cnt) {
			ans = std::max(__ans, ans);
		}
	}

	std::cout << ans;
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
