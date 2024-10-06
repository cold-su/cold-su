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
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }

    std::vector<int> temp(n - 1);
    for (int i = 0; i + 1 < nums.size(); i++) {
        temp[i] = nums[i + 1] - nums[i];
    }

    int cnt = 0, ans = 0;
    for (int i : temp) {
        if (i <= 0) {
            cnt++;
        } else {
            cnt = 0;
        }
        ans = std::max(ans, cnt);
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