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
    int n;
    std::cin >> n;

    char a, b;
    std::cin >> a >> b;

    int y = 10;
    if (a == 'B') {
        if (b == 'C') {
            y = 6;
        } else {
            y = 8;
        }
    } else if (a == 'C') {
        if (b == 'B') {
            y = 6;
        } else {
            y = 7;
        }
    } else if (a == 'A') {
        if (b == 'C') {
            y = 7;
        } else if (b == 'B') {
            y = 8;
        }
    }

    std::cout << n / 10 * y;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}