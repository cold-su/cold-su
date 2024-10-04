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
    int n, a, b, c;
    std::cin >> n >> a >> b >> c;

    int min;
    if (n <= 3) {
        min = std::min({ a, b, c });
        if (min == a) {
            std::cout << "library";
        } else if (min == b) {
            std::cout << "comprehensive";
        } else {
            std::cout << "art";
        }
    } else if (n <= 5) {
        min = std::min({ b, c });
        if (min == b) {
            std::cout << "comprehensive";
        } else {
            std::cout << "art";
        }
    } else if (n <= 9) {
        std::cout << "art";
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