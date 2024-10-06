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
    int n;
    std::cin >> n;
    std::vector<int> nums(n + 1, 0);
    for (int i = 1; i < nums.size(); i++)
        std::cin >> nums[i];

    for (int i = 0; i + 1 < nums.size(); i++) {
        if (nums[i] + 15 < nums[i + 1]) {
            std::cout << nums[i] + 15;
            return;
        }
    }
    int ans = nums[n] + 15;
    std::cout << (ans >= 90 ? 90 : ans);
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}