#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int s;
	std::cin >> s;
	auto count = [](int x) {
		int res = 0;
		for (int i = 1; i < x; i++) {
			if (x % i == 0) {
				res += i;
			}
		}
		return res;
	};
	std::vector<int> memo(s + 1, -1);
	std::vector<bool> vis(s + 1, false);
	auto dfs = [&](auto& self, int x) -> int {
		if (x == 0) {
			return 0;
		}
		int& res = memo[x];
		if (res != -1) {
			return res;
		}
		for (int i = 1; i <= x; i++) {
			if (vis[i] == false) {
				vis[i] = true;
				res = std::max(res, self(self, x - i) + count(i));
				vis[i] = false;
			}
		}
		return res;
	};
	std::cout << dfs(dfs, s);
	return 0;
}
