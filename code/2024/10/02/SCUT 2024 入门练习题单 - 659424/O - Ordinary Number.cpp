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
    for (int& i : nums) {
        std::cin >> i;
    }

    int cnt = 0;
    for (int i = 1; i + 1 < nums.size(); i++) {
        int max = std::max({nums[i - 1], nums[i], nums[i + 1]})
            , min = std::min({nums[i - 1], nums[i], nums[i + 1]});
        if (min < nums[i] && nums[i] < max) {
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