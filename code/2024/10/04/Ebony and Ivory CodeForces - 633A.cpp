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
    int a, b, c;
    std::cin >> a >> b >> c;

    int temp = c;
    for (int i = 0; i <= c; i++) {
        if (i % a == 0 && temp % b == 0) {
            std::cout << "Yes";
            return;
        }
        temp--;
    }
    std::cout << "No";
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}