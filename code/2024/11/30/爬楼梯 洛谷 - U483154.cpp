#include <bits/stdc++.h>

#define deb(...) puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const bool HAVE_MULTIPLE_TESTCASES = true;

int dfs(int n, std::vector<int>& visited) {
	int res;

	if (visited[n]) {
		return visited[n];
	}

	if (n <= 2) {
		res = n;
	} else {
		res = dfs(n -  1, visited) + dfs(n - 2, visited);
	}

	visited[n] = res;
	return res;
}

void solve() {
	int n;
	std::cin >> n;

	std::vector<int> visited(n + 1, 0LL);

	std::cout << dfs(n, visited) << "\n";
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	if (HAVE_MULTIPLE_TESTCASES) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
