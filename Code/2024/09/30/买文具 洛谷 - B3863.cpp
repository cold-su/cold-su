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
    int x, y, z;
    std::cin >> x >> y >> z;

    int q;
    std::cin >> q;

    int ans = q - (2 * x + 5 * y + 3 * z);

    if (ans < 0)
        std::cout << "No\n" << abs(ans);
    else std::cout << "Yes\n" << ans;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}