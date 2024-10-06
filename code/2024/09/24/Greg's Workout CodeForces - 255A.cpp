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
    std::vector<int> nums(n);
    for (int& i : nums)
        std::cin >> i;
    
    std::vector<int> ans(3);
    for (int i = 0; i < n; i++) {
        ans[i % 3] += nums[i];
    }

    int max = *std::max_element(ans.begin(), ans.end());
    int __ans;
    for (int i = 0; i < ans.size(); i++) {
        if (max == ans[i]) {
            __ans = i;
        }
    }
    if (__ans == 2)
        std::cout << "back";
    if (__ans == 0)
        std::cout << "chest";
    if (__ans == 1)
        std::cout << "biceps";
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}
