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
    int n, m;
    std::cin >> n >> m;
    std::vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }

    if (nums.size() <= m) {
        std::cout << std::accumulate(nums.begin(), nums.end(), 0);
        return;
    }

    int ans = INT_MAX;
    for (int i = 0; i + m < nums.size(); i++) {
        int sum = 0;
        int j = i;
        while (j < i + m) {
            sum += nums[j];
            j++;
        }
        ans = std::min(ans, sum);
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