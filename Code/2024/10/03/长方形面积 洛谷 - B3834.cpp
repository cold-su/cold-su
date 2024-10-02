#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
} ();

/* MY SOLUTION */

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    int n;
    std::cin >> n;

    int cnt = 0;
    std::map<std::pair<int, int>, bool> map;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i * j == n && map[{i, j}] == false && map[{j, i}] == false) {
                map[{i, j}] = map[{j, i}] = true;
                cnt++;
            }
        }
    }
    std::cout << cnt;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}