#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())
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
    int k, l, r;
    std::cin >> k >> l >> r;

    int ans = 0;

    std::set<int> set;
    for (int i = k; i <= r; i += 10) {
        if (l <= i && i <= r)
            set.insert(i);
    }

    for (int i = k; i <= r; i += k) {
        if (l <= i && i <= r)
            set.insert(i);
    }

    std::cout << std::accumulate(set.begin(), set.end(), 0);
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}