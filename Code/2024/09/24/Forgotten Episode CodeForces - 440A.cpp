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
    
    std::vector<int> nums(n - 1);
    for (int i = 0; i < n - 1; i++) {
        std::cin >> nums[i];
    }
    std::ranges::sort(nums);
    
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            std::cout << i + 1;
            return;
        }
    }
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}