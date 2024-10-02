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
    int n, m;
    std::cin >> n >> m;
    std::vector<std::pair<int, int>> nums(m);
    for (auto& [l, r] : nums) {
        std::cin >> l >> r;
    }

    int min = INT_MAX, max = INT_MIN;

    for (auto [a, b] : nums) {
        min = std::min(b, min);
        max = std::max(a, max);
    }

    if (n < max || max > min) {
        std::cout << 0;
        return;
    }

    if (n < min) {
        std::cout << n - max + 1;
    } else {
        std::cout << min - max + 1;
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