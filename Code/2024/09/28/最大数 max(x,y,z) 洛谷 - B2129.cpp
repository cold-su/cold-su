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
    int a, b, c;
    std::cin >> a >> b >> c;

    int x = std::max({ a + b, b, c }) * std::max({ a, b, b + c });
    double ans = std::max({ a, b, c }) / double(x);
    std::cout << std::fixed << std::setprecision(3) << ans;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}