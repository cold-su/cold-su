#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

void solve() {
	int n;
	std::cin >> n;
	vector<int> res(n);

	for (int i = 0; i < n; i++) {
		std::cin >> res[i];
	}

	int ans = 0;
	for (int i = 1; i < n; i++) {
		if (res[i] > res[i - 1]) {
			ans += res[i] - res[i - 1];
		}
	}
	std::cout << ans + res[0];
}

int main() {
    solve();
    return 0;
}