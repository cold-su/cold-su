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
    int n, m;
    std::cin >> n >> m;

    std::map<int, int> map;
    for (int i = 0; i < n; i++) {
        map[i]++;
    }
    while (m--) {
        int a;
        std::cin >> a;
        map[a]++;
    }

    int cnt = 0;
    for (auto [key, val] : map) {
        if (val == 1) {
            std::cout << key << " ";
            continue;
        }
        cnt++;
    }
    if (cnt == n)
        std::cout << n;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}