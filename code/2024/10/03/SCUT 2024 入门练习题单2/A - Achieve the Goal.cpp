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
    int n, k, m;
    std::cin >> n >> k >> m;
    std::vector<int> nums(n - 1);
    for (int& i : nums) {
        std::cin >> i;
    }

    int sum = 0;
    for (int i : nums) {
        sum += i;
    }
    
    int ans = n * m - sum;

    if (ans < 0) {
        ans = 0;
    } else if (ans > k) {
        ans = -1;
    }

    std::cout << ans;
    // println("{} ?", ans);
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}