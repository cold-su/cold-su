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
    int n, k, q;
    std::cin >> n >> k >> q;
    std::vector<int> nums(q);
    std::map<int, int> map;
    for (int i : nums) {
        std::cin >> i;
        map[i]++;
    }

    for (int i = 0; i < n; i++) {
        if (map[i + 1] >= q - k + 1) {
            std::cout << "Yes\n";
        } else {
            std::cout << "No\n";
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