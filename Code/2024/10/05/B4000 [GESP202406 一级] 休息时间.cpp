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
    int a, b, c, k;
    std::cin >> a >> b >> c >> k;

    c += k;
    while (c >= 60) {
        c -= 60;
        b++;
    }
    while (b >= 60) {
        b -= 60;
        a++;
    }
    a = a % 24;

    println("{} {} {}", a, b, c);
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}