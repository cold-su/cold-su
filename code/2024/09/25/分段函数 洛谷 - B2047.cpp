#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}
();

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    double n;
    std::cin >> n;

    double ans = 0;
    if (0 <= n && n < 5)
        ans = -n + 2.5;
    if (5 <= n && n < 10)
        ans = 2 - 1.5 * (n - 3) * (n - 3);
    if (10 <= n && n < 20)
        ans = n / 2 - 1.5;

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