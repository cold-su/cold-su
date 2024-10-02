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
    int a, b;
    std::cin >> a >> b;


    if (a > b) {
        std::swap(a, b);
    }

    if ((a + b) % 2 == 1) {
        std::cout << "IMPOSSIBLE";
        return;
    }

    int left = 1, right = 1e9 + 7;
    while (left + 1 < right) {
        int mid = left + (right - left) / 2;

        int _a = abs(a - mid);
        int _b = abs(b - mid);

        if (_a > _b) {
            right = mid;
        } else {
            left = mid;
        }
    }
    std::cout << left;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}