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

    std::vector<std::pair<int, int>> nums(n);
    for (auto& pair : nums) {
        auto& [a, b] = pair;
        std::cin >> a >> b;
    }

    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
        k += nums[i].second;
    }

    double ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        // int a = nums[i].first, b = nums[i].second;
        auto [a, b] = nums[i];
        if (a == 1) {
            ans += b / (double)k * m;
        }
    }

    std::cout << std::fixed << std::setprecision(3) << ans;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}