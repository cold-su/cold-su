#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}
();

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    int n, m;
    std::cin >> n >> m;
    
    double ans = 0;
    for (int i = 0; i < n; i++) {
        std::vector<int> nums(m);
        for (int j = 0; j < m; j++) {
            std::cin >> nums[j];
        }
        std::ranges::sort(nums);

        int sum = 0;
        for (int j = 1; j < nums.size() - 1; j++) {
            sum += nums[j];
        }

        double ret = (double) sum / (nums.size() - 2);

        ans = std::max(ans, ret);
    }

    std::cout << std::fixed << std::setprecision(2) << ans;
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}
