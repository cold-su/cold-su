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
    while (std::cin >> n) {
        if (90 <= n && n <= 100) {
            std::cout << "A\n";
        } else if (80 <= n && n <= 89) {
            std::cout << "B\n";
        } else if (70 <= n && n <= 79) {
            std::cout << "C\n";
        } else if (60 <= n && n <= 69) {
            std::cout << "D\n";
        } else if (0 <= n && n <= 59) {
            std::cout << "E\n";
        } else {
            std::cout << "Score is error!\n";
        }
    }
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}