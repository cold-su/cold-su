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

    std::vector<int> nums(m);
    for (int& i : nums)
        std::cin >> i;

    int ans = nums[0] - 1;
    for (int i = 0; i + 1 < nums.size(); i++) {
        if (nums[i] > nums[i + 1])
            ans += n - nums[i] + nums[i + 1];
        else
            ans += nums[i + 1] - nums[i];
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