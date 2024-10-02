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
    int n, x;
    std::cin >> n >> x;
    std::vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++) {
        std::cin >> nums[i];
    }

    int p = 0, cnt = 1;
    for (int i = 0; i < nums.size(); i++) {
        nums[i] += p;
        p = nums[i];
        if (nums[i] <= x) {
            cnt++;
        }
    }
    std::cout << cnt;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}