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
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int& i : nums)
        std::cin >> i;

    int ans = INT_MAX;
    for (int i = 1; i < nums.size(); i++) {
        int a = 0, b = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (j < i) {
                a += nums[j];
            } else {
                b += nums[j];
            }
        }
        ans = std::min(ans, abs(a - b));
    } 

    std::cout << ans;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}