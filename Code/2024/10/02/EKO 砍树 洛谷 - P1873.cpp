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

    std::vector<int> nums(n);
    for (int& i : nums)
        std::cin >> i;

    int left = 1, right = 1e9 + 1;
    while (left + 1 < right) {
        int mid = left + (right - left) / 2;

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= mid) {
                continue;
            }
            sum += nums[i] - mid;
        }

        if (sum >= m) {
            left = mid;
        } else if (sum < m) {
            right = mid;
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