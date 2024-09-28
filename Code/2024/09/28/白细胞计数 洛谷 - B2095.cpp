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

    std::vector<float> nums(n);
    for (float& i : nums)
        std::cin >> i;
    std::ranges::sort(nums);

    float sum = 0;
    for (int i = 1; i < nums.size() - 1; i++) {
        sum += nums[i];
    }

    float ans = 1.0f * (sum / (nums.size() - 2));

    float _ans = INT_MIN;
    for (int i = 1; i < nums.size() - 1; i++) {
        _ans = std::max(std::abs(1.0f * (nums[i] - ans)), _ans);
    }
    std::cout << std::fixed << std::setprecision(2) 
        << ans << " " << _ans;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}