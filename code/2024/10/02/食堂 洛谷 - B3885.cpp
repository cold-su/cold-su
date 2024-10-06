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
    int a, b, r, v, m;
    std::cin >> a >> b >> r >> v >> m;

    int ans = b * r + 2 * a * 2 * r;
    int _ans = b * v + 2 * a * 3 * v;
    int __ans = b * m + 2 * a * 3 * m;

    println("{} {} {}", ans, _ans, __ans);
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}