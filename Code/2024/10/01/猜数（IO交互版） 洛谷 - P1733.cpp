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
    int left = 1, right = 1e9;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        std::cout << mid << std::endl;

        int a;
        std::cin >> a;

        if (a == -1) {
            left = mid + 1;
        } else if (a == 1) {
            right = mid - 1;
        } else if (a == 0) {
            std::cout << (size_t)mid << std::endl;
            return;
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